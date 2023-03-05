In this task, you will be required to implement analogs of the popular MapReduce concept in terms of streams.

Write a map_reduce function that takes as input:

iterator to the beginning of the sequence,
iterator to the end of the sequence,
a unary functor that can be applied to the elements of a sequence,
a binary functor that can be applied to the results of applying the first functor,
number of threads.
The result of calling map_reduce
auto res = map_reduce(p, q, f1, f2, num);
should be equivalent to the result of the following code:

auto res = f1(*p);

while(++p != q) res = f2(res, f1(*p));
     
only the execution of this code should be split into num threads. To do this, you can split the range [p,q) into num parts, perform the calculation for each part in a separate thread, and merge the results from all threads.

Guarantees:

The sequence length is not less than the number of threads.

The function f2 is associative.

Requirements:

You need to implement map_reduce using std::async.

The function must not modify or copy the sequence.

Streams should not have shared non-const data (respectively, synchronization primitives are not needed).
