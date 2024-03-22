#pragma once

#include <iostream>
#include <string>
#include "Time.h" // Including the Time header file

class Bill {
private:
    std::string lastName;
    std::string phoneNumber;
    double minuteRate;
    double discount;
    double totalAmount;

public:
   
    // constructors
    Bill();
    Bill(const std::string& lastName, const std::string& phoneNumber, double minuteRate, double discount, const Time& startTime, const Time& endTime);
    Bill(const Bill& other);

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

    Time startTime;
    Time endTime;
};
