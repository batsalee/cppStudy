#include <algorithm>
#include <iostream>
#include <vector>

int containerControl()
{
	std::vector<int> array = { 1, 2, 3, 4, 5 };
	for (int i : array) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;

	/*
	������
	�����̳� �� �ƴ϶� string��ü�� �� ��������
	reverse(str.begin(), str.end());
	*/
	std::reverse(array.begin(), array.end());
	for (int i : array) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;

	/*
	ȸ����Ű��
	rotate(���۹ݺ���, ù��ġ�� �� �ݺ���, ����ݺ���)
	begin()+1 �� �ι�° �ڸ��� ù��ġ�� ���ٴ°� �������� ��ĭ�� �̵��Ѵٴ� ���̹Ƿ�
	*/
	// ��ĭ�� ���� �̵�
	std::rotate(array.begin(), array.begin() + 1, array.end()); 
	// ��ĭ�� ������ �̵�
	std::rotate(array.begin(), array.end() - 1, array.end()); 

	return 0;
}