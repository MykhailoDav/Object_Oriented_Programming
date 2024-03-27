#pragma once
#include <iostream>
#include <string>
using namespace std;

class Money
{
protected:
	int _500hrn, _200hrn, _100hrn, _50hrn, _20hrn, _10hrn, _5hrn, _2hrn, _1hrn;
	int _50kop, _25kop, _10kop, _5kop, _2kop, _1kop;

public:
	Money();
	Money(int _500hrn, int _200hrn, int _100hrn, int _50hrn, int _20hrn, int _10hrn, int _5hrn, int _2hrn, int _1hrn,
		int _50kop, int _25kop, int _10kop, int _5kop, int _2kop, int _1kop);
	Money(const Money&);

	int get500hrn() const { return _500hrn; }
	void set500hrn(int value);

	int get200hrn() const { return _200hrn; }
	void set200hrn(int value);

	int get100hrn() const { return _100hrn; }
	void set100hrn(int value);

	int get50hrn() const { return _500hrn; }
	void set50hrn(int value);

	int get20hrn() const { return _20hrn; }
	void set20hrn(int value);

	int get10hrn() const { return _10hrn; }
	void set10hrn(int value);

	int get5hrn() const { return _5hrn; }
	void set5hrn(int value);

	int get2hrn() const { return _2hrn; }
	void set2hrn(int value);

	int get1hrn() const { return _1hrn; }
	void set1hrn(int value);

	int get50kop() const { return _50kop; }
	void set50kop(int value);

	int get25kop() const { return _25kop; }
	void set25kop(int value);

	int get10kop() const { return _10kop; }
	void set10kop(int value);

	int get5kop() const { return _5kop; }
	void set5kop(int value);

	int get2kop() const { return _2kop; }
	void set2kop(int value);

	int get1kop() const { return _1kop; }
	void set1kop(int value);

	friend ostream& operator <<(ostream&, const Money&);
	friend istream& operator >>(istream& in, Money& m);
	operator string() const;
};

