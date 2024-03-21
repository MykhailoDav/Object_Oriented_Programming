#pragma once

#include <iostream>
#include <string>
using namespace std;
class Time {
private:
	unsigned int hour;
	unsigned int minute;
	unsigned int second;

public:
	Time();
	Time(unsigned int hour, unsigned int minute, unsigned int second);
	Time(string timeString);
	Time(unsigned int seconds);
	Time(const Time& other);
	double GetHour() const { return hour; }
	double GetMinute() const { return minute; }
	double GetSecond() const { return second; }
	void SetHour(double value) { hour = value; }
	void SetMinute(double value) { minute = value; }
	void SetSecond(double value) { second = value; }

	Time& operator =(const Time& t);
	friend ostream& operator <<(ostream&, const Time&);
	friend istream& operator >>(istream&, Time&);
	operator string() const;
	Time& operator ++();
	Time& operator --();
	Time operator ++(int);
	Time operator --(int);

	unsigned int DifferenceInSeconds(Time otherTime);

	void AddSeconds(unsigned int seconds);
	void SubtractSeconds(unsigned int seconds);

	bool IsEqualTo(Time otherTime);
	unsigned int ToMinutes();
	unsigned int ToSeconds();
};
