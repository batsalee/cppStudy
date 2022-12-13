#include <iostream>
#include <stack>

int main()
{
	std::stack<int> s;

	s.push(3);
	s.push(2);
	s.push(1);

	std::cout << s.top(); // 1 ���

	s.pop(); // 1 ����
	s.pop(); // 2 ����

	s.size(); // ���� ������ ��ȯ

	std::cout << std::boolalpha;
	std::cout << s.empty(); // ��������� true, �ƴϸ� false ��ȯ
}