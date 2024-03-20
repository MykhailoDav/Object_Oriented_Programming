#pragma once
#include <iostream>
#include <string>
//#pragma pack(push, 1)

using namespace std;
class FloatRange
{
private:
	double first;
	double second;

public:
	FloatRange();
	FloatRange(double f, double s);
	FloatRange(const FloatRange& other);
	~FloatRange();

	void SetFirst(double);
	void SetSecond(double);
	double GetFirst() const;
	double GetSecond() const;


	FloatRange& operator=(const FloatRange&);
	operator string() const;

	friend FloatRange operator + (const FloatRange&, const FloatRange&);
	friend FloatRange operator - (const FloatRange&, const FloatRange&);
	friend FloatRange operator * (const FloatRange&, const FloatRange&);
	friend FloatRange operator / (const FloatRange&, const FloatRange&);
	friend FloatRange operator ^ (const FloatRange&, const unsigned);

	friend ostream& operator << (ostream&, const FloatRange&);
	friend istream& operator >> (istream&, FloatRange&);

	FloatRange& operator ++();
	FloatRange& operator --();
	FloatRange operator ++(int);
	FloatRange operator --(int);

	bool RangeCheck(double x) const;

};




