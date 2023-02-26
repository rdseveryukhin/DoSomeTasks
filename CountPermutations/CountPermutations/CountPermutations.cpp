#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

template<class Iterator>
size_t count_permutations(Iterator p, Iterator q)
{
	using T = typename std::iterator_traits<Iterator>::value_type;

	std::vector<T> s = {};
	auto tmp = p;
	for (; tmp != q; tmp++) {
		s.push_back(*tmp);
	}
	std::sort(s.begin(), s.end());

	size_t count = 0;

	do {
		if (adjacent_find(s.begin(), s.end()) == s.end()) {
			count++;
		}
	} while (std::next_permutation(s.begin(), s.end()));
	return count;
}

int main() {
	std::array<int, 3> a1 = { 1,2,3 };
	size_t c1 = count_permutations(a1.begin(), a1.end()); // 6
	std::cout << c1 << std::endl;

	std::array<int, 5> a2 = { 1,2,3,4,4 };
	size_t c2 = count_permutations(a2.begin(), a2.end()); // 36
	std::cout << c2 << std::endl;

	const std::array<int, 3> a3 = { 1, 2, 1 };
	const size_t c3 = count_permutations(a3.begin(), a3.end()); // 1
	std::cout << c3 << std::endl;

	const std::array<int, 3> a4 = { 1, 1, 1 };
	const size_t c4 = count_permutations(a4.begin(), a4.end()); // 0
	std::cout << c4 << std::endl;

	const std::array<int, 1> a5 = {};
	const size_t c5 = count_permutations(a5.begin(), a5.end()); // 1
	std::cout << c5 << std::endl;
}
