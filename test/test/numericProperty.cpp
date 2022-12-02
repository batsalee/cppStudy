#include <iostream>
#include <numeric>
#include "numericProperty.h"

void numericProperty()
{
	/*
	gcd, lcm ���� ���ǻ���
	c++ 17������ numeric����� �߰��� �����̹Ƿ� ������Ʈ �Ӽ� -> ��� -> ������ 17�̻��������

	GCD : �ִ�����
	LCM : �ּҰ����
	�ּҰ���� = a * b / �ִ�����;
	lcm(a, b) = a * b / gcd(a, b);
	*/
	int num1 = 35, num2 = 56;
	std::cout << "num1�� num2�� �ִ����� : " << std::gcd(num1, num2) << std::endl;
	std::cout << "num1�� num2�� �ּҰ���� : " << std::lcm(num1, num2) << std::endl;

	/*
	��Ŭ���� ȣ����
	int gcd(int a, int b)
	{
		int c;
		while(b != 0) {
			c = a % b;
			a = b;
			b = c;
		}
		return a;
	}

	int lcm(int a, int b)
	{
		return a * b / gcd(a, b);
	}
	*/
}