#include <iostream>

template <int N>
struct A {
	int operator()() { return N; }
};

int main() {
	/*
	constexpr int size = 3;
	int arr[size];  // Good!

	constexpr int N = 10;
	A<N> a;  // Good!
	std::cout << a() << std::endl;

	constexpr int number = 3;
	enum B { x = number, y, z };  // Good!
	std::cout << B::x << std::endl;
	*/

	int n, m;
	
	// int array[n][m]; // 불가능
	// constexpr int array[n][m]; // 불가능
	n = 3, n = 2;
	std::cin >> n >> m;
	// int array[n][m]; // 불가능
	constexpr int array[n][m]; // 가능
	

}