#include <iostream>
#include <stack>
#include <queue>

int main()
{
	/*
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
	*/

	std::queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);

	std::cout << q.front() << '\n'; // 1 ���
	std::cout << q.back() << '\n'; // 3 ���
}