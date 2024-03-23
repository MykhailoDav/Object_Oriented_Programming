#include "Time.h"
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

Time::Time() : hour(0), minute(0), second(0) {}
Time::Time(unsigned int hour, unsigned int minute, unsigned int second)
	: hour(hour), minute(minute), second(second) {}
Time::Time(string timeString) {
	size_t pos1 = timeString.find(':');
	size_t pos2 = timeString.find(':', pos1 + 1);

	if (pos1 == string::npos || pos2 == string::npos || pos1 == 0 || pos2 == timeString.length() - 1) {
		cout << "Invalid time format. Please use 'hour:minute:second'." << std::endl;
	}

	string hourStr = timeString.substr(0, pos1);
	string minuteStr = timeString.substr(pos1 + 1, pos2 - pos1 - 1);
	string secondStr = timeString.substr(pos2 + 1);

	try {
		hour = stoi(hourStr);
		minute = stoi(minuteStr);
		second = stoi(secondStr);

	}
	catch (const invalid_argument& e) {
		cout << "Invalid time format. Please use numeric values for hour, minute, and second." << endl;
	}
}
Time::Time(unsigned int seconds) {
	hour = seconds / 3600;
	minute = (seconds % 3600) / 60;
	second = seconds % 60;
}
Time::Time(const Time& other) {
	hour = other.hour;
	minute = other.minute;
	second = other.second;
}

Time& Time::operator =(const Time& t)
{
	hour = t.hour;
	minute = t.minute;
	second = t.second;
	return *this;
}
ostream& operator<<(ostream& out, const Time& time) {
	out << "Time: " << setw(2) << setfill('0') << time.hour << ":" << setw(2) << setfill('0') << time.minute << ":" << setw(2) << setfill('0') << time.second;
	return out;
}
istream& operator >>(istream& in, Time& x)
{
	std::cout << "\nSelect the format:" << std::endl;
	std::cout << "1. Initialize with numbers" << std::endl;
	std::cout << "2. Initialize with string" << std::endl;
	std::cout << "3. Initialize with seconds from midnight" << std::endl;
	std::cout << "4. Initialize with default time" << std::endl;

	int choice;
	std::cin >> choice;
	string timeString, hourStr, minuteStr, secondStr;
	size_t pos1, pos2;
	switch (choice) {
	case 1:
		std::cout << "Enter hours:";
		in >> x.hour;
		std::cout << "Enter minutes:";
		in >> x.minute;
		std::cout << "Enter seconds:";
		in >> x.second;
		break;
	case 2:
		std::cout << "Enter time in the format 'hour:minute:second':" << std::endl;
		std::cin >> timeString;
		pos1 = timeString.find(':');
		pos2 = timeString.find(':', pos1 + 1);

		if (pos1 == string::npos || pos2 == string::npos || pos1 == 0 || pos2 == timeString.length() - 1) {
			std::cout << "Invalid time format. Please use 'hour:minute:second'." << std::endl;
		}

		hourStr = timeString.substr(0, pos1);
		minuteStr = timeString.substr(pos1 + 1, pos2 - pos1 - 1);
		secondStr = timeString.substr(pos2 + 1);

		try {
			x.hour = stoi(hourStr);
			x.minute = stoi(minuteStr);
			x.second = stoi(secondStr);

		}
		catch (const invalid_argument& e) {
			std::cout << "Invalid time format. Please use numeric values for hour, minute, and second." << endl;
		}
		break;
	case 3:
		unsigned int seconds;
		std::cout << "Enter seconds from midnight:" << endl;
		std::cin >> seconds;
		x.hour = seconds / 3600;
		x.minute = (seconds % 3600) / 60;
		x.second = seconds % 60;
		break;
	case 4:
		x.hour = 0;
		x.minute = 0;
		x.second = 0;
		break;
	default:
		std::cout << "Invalid choice" << std::endl;
		break;
	}
	return in;
}
Time::operator string() const
{
	stringstream ss;
	ss << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second;
	return ss.str();
}

Time& Time::operator ++()
{
	++hour;
	return *this;
}
Time& Time::operator --()
{
	--hour;
	return *this;
}
Time Time::operator ++(int)
{
	Time tmp = *this;
	++minute;
	return tmp;
}
Time Time::operator --(int)
{
	Time tmp = *this;
	--minute;
	return tmp;
}

unsigned int Time::DifferenceInSeconds(Time otherTime) {
	return otherTime.ToSeconds() - ToSeconds();
}

void Time::AddSeconds(unsigned int seconds) {
	unsigned int totalSeconds = ToSeconds() + seconds;
	hour = totalSeconds / 3600;
	minute = (totalSeconds % 3600) / 60;
	second = totalSeconds % 60;

	hour %= 24;
}

void Time::SubtractSeconds(unsigned int seconds) {
	int totalSeconds = static_cast<int>(ToSeconds()) - static_cast<int>(seconds);
	if (totalSeconds < 0) {
		totalSeconds += 24 * 60 * 60;
	}
	hour = static_cast<unsigned int>(totalSeconds / 3600);
	minute = static_cast<unsigned int>((totalSeconds % 3600) / 60);
	second = static_cast<unsigned int>(totalSeconds % 60);
}


bool Time::IsEqualTo(Time otherTime) {
	return ToSeconds() == otherTime.ToSeconds();
}


unsigned int operator-(Time& time1, Time& time2) {
	return time1.ToSeconds() - time2.ToSeconds();
}
Time operator+(const Time& time, unsigned int seconds) {
	Time result = time;
	result.AddSeconds(seconds);
	return result;
}
Time operator-(const Time& time, unsigned int seconds) {
	Time result = time;
	result.SubtractSeconds(seconds);
	return result;
}
bool operator==(Time& time1, Time& time2) {
	return time1.ToSeconds() == time2.ToSeconds();
}
bool operator!=(Time& time1, Time& time2) {
	return !(time1 == time2);
}

unsigned int Time::ToMinutes() {
	return ToSeconds() / 60;
}

unsigned int Time::ToSeconds() {
	return hour * 3600 + minute * 60 + second;
}

