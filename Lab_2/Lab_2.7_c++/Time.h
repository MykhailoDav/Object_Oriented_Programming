#pragma once

#include <iostream>
#include <string>

class Time {
private:
    unsigned int Hour;
    unsigned int Minute;
    unsigned int Second;

public:
    Time();
    Time(unsigned int seconds);
    Time(unsigned int hour, unsigned int minute, unsigned int second);

    bool Init(unsigned int hour, unsigned int minute, unsigned int second);
    bool Init(std::string timeString);
    bool Init(unsigned int secondsFromMidnight);

    void Display();

    unsigned int DifferenceInSeconds(Time otherTime);

    void AddSeconds(unsigned int seconds);
    void SubtractSeconds(unsigned int seconds);

    bool IsEqualTo(Time otherTime);

    unsigned int ToSeconds();
};
