#include <thread>
#include <iterator>
#include <utility>
#include <vector>
#include <iostream>
#include <mutex>

std::mutex mtx;
template <typename IT, typename Func1, typename Func2>
auto foo(IT p, IT q, Func1 f1, Func2 f2) -> decltype(f2(f1(*p), f1(*p)))
{
	mtx.lock();
	auto res = f1(*p);
	while (++p != q)
		res = f2(res, f1(*p));
	return static_cast<decltype(f2(f1(*p), f1(*p)))>(res);
	mtx.unlock();
}

template <typename IT, typename Func1, typename Func2>
auto map_reduce(IT p, IT q, Func1 f1, Func2 f2, size_t threads) -> decltype(f2(f1(*p), f1(*p)))
{
	using TypeRes = decltype(f2(f1(*p), f1(*p)));
	int length = std::distance(p, q);

	std::thread* th = new std::thread[threads];
	std::vector<TypeRes> vecFut(threads);

	for (int i = 0; i < threads; i++)
	{
		auto p1 = p;
		auto q1 = p;
		std::advance(p1, static_cast<int>(i * length / threads));
		std::advance(q1, static_cast<int>((i + 1) * length / threads));
		std::thread t([&vecFut, i, p1, q1, f1, f2]() {vecFut[i] = foo(p1, q1, f1, f2); });
		th[i] = (std::move(t));
	}

	for (int j = 0; j < threads; j++) {
		th[j].join();
	}

	delete[] th;

	auto res = vecFut[0];
	for (int i = 1; i < threads; i++) {
		res = f2(res, vecFut[i]);
	}

	return res;
}
