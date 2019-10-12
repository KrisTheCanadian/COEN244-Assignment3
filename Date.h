#pragma once
class Date
{
public:
	Date();
	Date(int, int, int);
	void print();
private:
	int month_;
	int day_;
	int year_;
};

