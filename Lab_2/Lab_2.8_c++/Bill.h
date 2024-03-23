#pragma once

#include <iostream>
#include <string>
using namespace std;

class Bill {
private:
	std::string lastName;
	std::string phoneNumber;
	double minuteRate;
	double discount;
	double totalAmount;
	static int counter;

public:
	class Time {
	private:
		unsigned int hour;
		unsigned int minute;
		unsigned int second;
		static int counter;
	public:
		Time();
		Time(unsigned int hour, unsigned int minute, unsigned int second);
		Time(string timeString);
		Time(unsigned int seconds);
		Time(const Time& other);
		~Time();
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

		friend unsigned int operator-(const Time& time1, const Time& time2);
		friend Time operator+(const Time& time, unsigned int seconds);
		friend Time operator-(const Time& time, unsigned int seconds);
		friend bool operator==(const Time& time1, const Time& time2);
		friend bool operator!=(const Time& time1, const Time& time2);

		unsigned int ToMinutes();
		unsigned int ToSeconds();
		static int getCounter() { return counter; }
	};


	// constructors
	Bill();
	Bill(const std::string& lastName, const std::string& phoneNumber, double minuteRate, double discount, const Time& startTime, const Time& endTime);
	Bill(const Bill& other);
	~Bill();

	Bill& operator =(const Bill& t);
	// Friend function declarations for input/output operations
	friend std::ostream& operator<<(std::ostream& out, const Bill& bill);
	friend std::istream& operator>>(std::istream& in, Bill& bill);

	operator string() const;

	Bill& operator ++();
	Bill& operator --();
	Bill operator ++(int);
	Bill operator --(int);

	void CalculateTotalAmount();
	// Getters and setters for private members
	std::string GetLastName() const { return lastName; }
	void SetLastName(const std::string& value) { lastName = value; }

	std::string GetPhoneNumber() const { return phoneNumber; }
	void SetPhoneNumber(const std::string& value) { phoneNumber = value; }

	double GetMinuteRate() const { return minuteRate; }
	void SetMinuteRate(double value) { minuteRate = value; }

	double GetDiscount() const { return discount; }
	void SetDiscount(double value) { discount = value; }

	double GetTotalAmount() const { return totalAmount; }
	void SetTotalAmount(double value) { totalAmount = value; }
	static int getCounter() { return counter; }
	Time startTime;
	Time endTime;
};