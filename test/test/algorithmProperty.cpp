#include "algorithmProperty.h"
#include <iostream>
#include <algorithm>

void compare()
{
	/*
	min, max �Լ�
	�� �� �� �� ������, ū���� return��
	
	���� ���ؾ� �� ���� 2������ ���� ��� ��ø���� ��� ����
	*/
	int a = 1, b = 2;
	std::cout << "�� ū ���� : " << std::max(a, b) << std::endl;
	std::cout << "�� ���� ���� : " << std::min(a, b) << std::endl;

	// ���ؾ� �� ���� ���� ��� ��ø���� ���
	int c = 3, d = 4;
	std::cout << "���� ū ���� : " << std::max( std::max(a, b), std::max(c, d) ) << std::endl;
}