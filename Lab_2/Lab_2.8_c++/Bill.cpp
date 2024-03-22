#include "Bill.h"
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
int Bill::counter = 0;

Bill::Bill() : minuteRate(0), discount(0), totalAmount(0) { counter++; }
Bill::Bill(const std::string& lastName, const std::string& phoneNumber, double minuteRate, double discount, const Time& startTime, const Time& endTime) {
	this->lastName = lastName;
	this->phoneNumber = phoneNumber;
	this->minuteRate = minuteRate;
	this->discount = discount;
	this->startTime = startTime;
	this->endTime = endTime;
	CalculateTotalAmount();
	counter++;
}
Bill::Bill(const Bill& other) {
	lastName = other.lastName;
	phoneNumber = other.phoneNumber;
	minuteRate = other.minuteRate;
	discount = other.discount;
	startTime = other.startTime;
	endTime = other.endTime;
	totalAmount = other.totalAmount;
	CalculateTotalAmount();
	counter++;
}
Bill::~Bill() {
	counter--;
}

void Bill::CalculateTotalAmount() {
	double startTimeInMinutes = startTime.GetHour() * 60 + startTime.GetMinute() + startTime.GetSecond() / 60;
	double endTimeInMinutes = endTime.GetHour() * 60 + endTime.GetMinute() + endTime.GetSecond() / 60;

	if (endTimeInMinutes < startTimeInMinutes) {
		endTimeInMinutes += 24 * 60;
	}

	int durationInMinutes = endTimeInMinutes - startTimeInMinutes;
	if (durationInMinutes % 1 != 0) { durationInMinutes = (durationInMinutes++); }
	double totalCost = durationInMinutes * minuteRate;
	double discountAmount = totalCost * (discount / 100);
	totalAmount = totalCost - discountAmount;
}


Bill& Bill::operator =(const Bill& t)
{
	lastName = t.lastName;
	phoneNumber = t.phoneNumber;
	minuteRate = t.minuteRate;
	discount = t.discount;
	startTime = t.startTime;
	endTime = t.endTime;
	totalAmount = t.totalAmount;
	return *this;
}
std::ostream& operator<<(std::ostream& out, const Bill& bill) {
	out << "Last Name: " << bill.lastName << std::endl;
	out << "Phone Number: " << bill.phoneNumber << std::endl;
	out << "Minute Rate: " << bill.minuteRate << std::endl;
	out << "Discount: " << bill.discount << std::endl;
	out << "Start Time: " << bill.startTime << std::endl;
	out << "End Time: " << bill.endTime << std::endl;
	out << "Total Amount: " << bill.totalAmount << " UAH" << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Bill& bill) {
	std::cout << "Enter details for bill:" << std::endl;
	std::cout << "Last Name: ";
	in >> bill.lastName;
	std::cout << "Phone Number: ";
	in >> bill.phoneNumber;
	std::cout << "Minute Rate: ";
	in >> bill.minuteRate;
	std::cout << "Discount: ";
	in >> bill.discount;

	std::cout << "Enter start time:" << std::endl;
	in >> bill.startTime;
	std::cout << "Enter end time:" << std::endl;
	in >> bill.endTime;
	return in;
}
Bill::operator string() const
{
	stringstream ss;
	ss << "Last Name: " << lastName << std::endl;
	ss << "Phone Number: " << phoneNumber << std::endl;
	ss << "Minute Rate: " << minuteRate << std::endl;
	ss << "Discount: " << discount << std::endl;
	ss << "Start Time: " << startTime << std::endl;
	ss << "End Time: " << endTime << std::endl;
	ss << "Total Amount: " << totalAmount << " UAH" << std::endl;
	return ss.str();
}

Bill& Bill::operator ++()
{
	++minuteRate;
	return *this;
}
Bill& Bill::operator --()
{
	--minuteRate;
	return *this;
}
Bill Bill::operator ++(int)
{
	Bill tmp = *this;
	++discount;
	return tmp;
}
Bill Bill::operator --(int)
{
	Bill tmp = *this;
	--discount;
	return tmp;
}


///////////////////   TIME   //////////////////////////////////
int Bill::Time::counter = 0;

Bill::Time::Time() : hour(0), minute(0), second(0) { counter++; }
Bill::Time::Time(unsigned int hour, unsigned int minute, unsigned int second)
	: hour(hour), minute(minute), second(second) {
	counter++;
}
Bill::Time::Time(string timeString) {
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
	counter++;
}
Bill::Time::~Time() { counter--; }
Bill::Time::Time(unsigned int seconds) {
	hour = seconds / 3600;
	minute = (seconds % 3600) / 60;
	second = seconds % 60;
}
Bill::Time::Time(const Time& other) {
	hour = other.hour;
	minute = other.minute;
	second = other.second;
}

Bill::Time& Bill::Time::operator =(const Time& t)
{
	hour = t.hour;
	minute = t.minute;
	second = t.second;
	return *this;
}
ostream& operator<<(ostream& out, const Bill::Time& time) {
	out << "Time: " << setw(2) << setfill('0') << time.hour << ":" << setw(2) << setfill('0') << time.minute << ":" << setw(2) << setfill('0') << time.second;
	return out;
}
istream& operator >>(istream& in, Bill::Time& x)
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
Bill::Time::operator string() const
{
	stringstream ss;
	ss << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second;
	return ss.str();
}

Bill::Time& Bill::Time::operator ++()
{
	++hour;
	return *this;
}
Bill::Time& Bill::Time::operator --()
{
	--hour;
	return *this;
}
Bill::Time Bill::Time::operator ++(int)
{
	Bill::Time tmp = *this;
	++minute;
	return tmp;
}
Bill::Time Bill::Time::operator --(int)
{
	Bill::Time tmp = *this;
	--minute;
	return tmp;
}

unsigned int Bill::Time::DifferenceInSeconds(Time otherTime) {
	return otherTime.ToSeconds() - ToSeconds();
}

void Bill::Time::AddSeconds(unsigned int seconds) {
	unsigned int totalSeconds = ToSeconds() + seconds;
	hour = totalSeconds / 3600;
	minute = (totalSeconds % 3600) / 60;
	second = totalSeconds % 60;

	hour %= 24;
}

void Bill::Time::SubtractSeconds(unsigned int seconds) {
	int totalSeconds = static_cast<int>(ToSeconds()) - static_cast<int>(seconds);
	if (totalSeconds < 0) {
		totalSeconds += 24 * 60 * 60;
	}
	hour = static_cast<unsigned int>(totalSeconds / 3600);
	minute = static_cast<unsigned int>((totalSeconds % 3600) / 60);
	second = static_cast<unsigned int>(totalSeconds % 60);
}

bool Bill::Time::IsEqualTo(Time otherTime) {
	return ToSeconds() == otherTime.ToSeconds();
}

unsigned int Bill::Time::ToMinutes() {
	return ToSeconds() / 60;
}

unsigned int Bill::Time::ToSeconds() {
	return (hour * 3600 + minute * 60 + second);
}

