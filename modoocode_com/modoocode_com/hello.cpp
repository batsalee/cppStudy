#include <iostream>

int main()
{
	int num = 10;
	int& another_num = num;

	std::cout << "num : " << num << std::endl;
	another_num = 15;
	std::cout << "num : " << num << std::endl;

	return 0;
}