#include "Date.h"
#include <iostream>

int maxMonth = 12;
int maxDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 2�� ���� ó�����ֱ�

void Date::SetDate(int year, int month, int day) // ��¥ ����
{
	year_ = year;
	month_ = month;
	day_ = day;
}

// ���ǻ��� 2012�� 2�� 28�Ͽ� 3���� ���ϸ� 2012�� 2�� 31���� �ƴ϶� 2012�� 3�� 2���� �Ǵ� ��        
void Date::AddDay(int inc) // inc��ŭ �ϼ��� ����
{
	day_ += inc;
	if(year_ % 4 == 0) // �����̸�
		maxDay[1] = 29;

	while (day_ > maxDay[month_-1])
	{
		day_ -= maxDay[month_-1];
		AddMonth(1);
	}
	maxDay[1] = 28; // �����̾��� ��� �ٽ� �ǵ��� �ֱ�
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