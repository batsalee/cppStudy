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

	// std::cin >> n >> m; // constexpr�� const�� �Ұ����ϰ�
	int array[n][m]; // �̷������� �迭������ �ƴ϶� �����ʿ� constexpr �ٿ���� ��
	
	// �ᱹ �����Ҷ� ���� ������ ���� ������ �� ��� constexpr ���� ���� �ϳ��θ� ���� �����ϴٴ°Ű�
	// �ϳ��� �׳� ���� �׳� ���� ������ �Ǵ� ��
	// �׳� �̷� ����� �ִٸ� �˾� �θ� �� ��
	

}