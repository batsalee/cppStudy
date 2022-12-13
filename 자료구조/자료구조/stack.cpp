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

	std::cout << s.top(); // 1 출력

	s.pop(); // 1 삭제
	s.pop(); // 2 삭제

	s.size(); // 스택 사이즈 반환

	std::cout << std::boolalpha;
	std::cout << s.empty(); // 비어있으면 true, 아니면 false 반환
	*/

	std::queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);

	std::cout << q.front() << '\n'; // 1 출력
	std::cout << q.back() << '\n'; // 3 출력
}