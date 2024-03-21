#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <sstream>
#include <iomanip>
#include "Bill.h"
using namespace std;

Bill::Bill() : minuteRate(0), discount(0), totalAmount(0) {}
Bill::Bill(const std::string& lastName, const std::string& phoneNumber, double minuteRate, double discount, const Time& startTime, const Time& endTime) {
	this->lastName = lastName;
	this->phoneNumber = phoneNumber;
	this->minuteRate = minuteRate;
	this->discount = discount;
	this->startTime = startTime;
	this->endTime = endTime;
}
Bill::Bill(const Bill& other) {
	lastName = other.lastName;
	phoneNumber = other.phoneNumber;
	minuteRate = other.minuteRate;
	discount = other.discount;
	startTime = other.startTime;
	endTime = other.endTime;
	totalAmount = other.totalAmount;
}

void Bill::CalculateTotalAmount() {
	unsigned int durationInSeconds = endTime.DifferenceInSeconds(startTime);
	double totalCost = durationInSeconds / 60.0 * minuteRate;
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
