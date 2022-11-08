#include <iostream>
#include "Date.h"

int main()
{
	Date date;
	int year, month, day;

	std::cout << "년도 : ";
	std::cin >> year;
	std::cout << std::endl <<  "월 : ";
	std::cin >> month;
	std::cout << std::endl << "일 : ";
	std::cin >> day;

	date.SetDate(year, month, day);

	int inc;
	std::cout << std::endl << "추가할 일 수 : ";
	std::cin >> inc;
	date.AddDay(inc);

	date.ShowDate();

	return 0;
}