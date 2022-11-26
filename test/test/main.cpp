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

	constexpr int n = 3, m = 3;

	// std::cin >> n >> m; // constexpr도 const라 불가능하고
	int array[n][m]; // 이런식으로 배열선언이 아니라 변수쪽에 constexpr 붙여줘야 함
	
	// 결국 재사용할때 오류 방지를 위해 변수로 쓸 경우 constexpr 쓰면 변수 하나로만 수정 가능하다는거고
	// 하나만 그냥 쓸땐 그냥 숫자 넣으면 되는 것
	// 그냥 이런 기능이 있다만 알아 두면 될 듯
	

}