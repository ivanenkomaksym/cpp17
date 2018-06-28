#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

template <typename ... Ts>
auto sum(Ts ... ts)
{
	return (ts + ...);
}

template <typename R, typename ... Ts>
auto matches(const R &range, Ts ... ts)
{
	return (std::count(std::begin(range), std::end(range), ts) + ...);
}

template <typename T, typename ... Ts>
bool within(T min, T max, Ts ...ts)
{
	return ((min <= ts && ts <= max) && ...);
}

template <typename T, typename ... Ts>
void insert_all(std::vector<T> &vec, Ts ... ts)
{
	(vec.push_back(ts), ...);
}

void fold_expressions()
{
	auto the_sum {sum(1, 2, 3, 4, 5)};
	std::cout << "sum(1, 2, 3, 4, 5) = " << the_sum << std::endl;

	auto v = std::vector{1, 2, 3, 4, 5};
	std::cout << "matches({1, 2, 3, 4, 5}, 2, 5) = " << matches(v, 2, 5) << std::endl;
	std::cout << "matches('abcdefg', 'a', 'd', 'z') = " << matches("abcdefg", 'a', 'd', 'z') << std::endl;

	std::cout << "within(10, 20, 1, 15, 30) = " << within(10, 20, 1, 15, 30) << std::endl;
	std::cout << "within(10, 20, 11, 12, 13) = " << within(10, 20, 11, 12, 13) << std::endl;

	std::vector<int> v2 {1, 2, 3};
	insert_all(v2, 4, 5, 6);
}