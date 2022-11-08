#include "Date.h"
#include <iostream>

int maxMonth = 12;
int maxDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 2월 윤년 처리해주기

void Date::SetDate(int year, int month, int day) // 날짜 설정
{
	year_ = year;
	month_ = month;
	day_ = day;
}

// 주의사항 2012년 2월 28일에 3일을 더하면 2012년 2월 31일이 아니라 2012년 3월 2일이 되는 것        
void Date::AddDay(int inc) // inc만큼 일수를 더함
{
	day_ += inc;
	if(year_ % 4 == 0) // 윤년이면
		maxDay[1] = 29;

	while (day_ > maxDay[month_-1])
	{
		day_ -= maxDay[month_-1];
		AddMonth(1);
	}
	maxDay[1] = 28; // 윤년이었을 경우 다시 되돌려 주기
}

void Date::AddMonth(int inc)
{
	month_ += inc;
	while (month_ > maxMonth)
	{
		month_ -= maxMonth;
		AddYear(1);
	}
}

void Date::AddYear(int inc)
{
	year_ += inc;
}

void Date::ShowDate()
{
	std::cout << year_ << "-" << month_ << "-" << day_;
}