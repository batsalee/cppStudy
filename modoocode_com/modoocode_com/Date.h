#pragma once

class Date {

private :
	int year_;
	int month_;  // 1 부터 12 까지.
	int day_;    // 1 부터 31 까지.

public:
	void SetDate(int year, int month, int day);
	void AddDay(int inc);
	void AddMonth(int inc);
	void AddYear(int inc);

	void ShowDate();
};