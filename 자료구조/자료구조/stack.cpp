#include <iostream>
#include <array>

int main()
{
	std::array<int, 3> a = { 1, 2, 3 };
	std::array<int, 3> b;

	b = a;

	std::cout << a.front() << ' ' << a.back() << std::endl;

	std::array<int, 5> c;
	c.fill(1);
	for (int i : c) {
		std::cout << i << ' ';
	}
}