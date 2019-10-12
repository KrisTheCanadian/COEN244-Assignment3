#pragma once
class Date
{
public:
	Date();
	Date(int, int, int);
	int getmonth();
	void setmonth(int);
	int getday();
	void setday(int);
	int getyear();
	void setyear(int);
	void print();
private:
	int month_;
	int day_;
	int year_;
};

