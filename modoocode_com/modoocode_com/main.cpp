#include <iostream>
#include "Date.h"

int main()
{
	Date date;
	int year, month, day;

	std::cout << "�⵵ : ";
	std::cin >> year;
	std::cout << std::endl <<  "�� : ";
	std::cin >> month;
	std::cout << std::endl << "�� : ";
	std::cin >> day;

	date.SetDate(year, month, day);

	int inc;
	std::cout << std::endl << "�߰��� �� �� : ";
	std::cin >> inc;
	date.AddDay(inc);

	date.ShowDate();

	return 0;
}