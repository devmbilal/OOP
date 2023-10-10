#pragma once
#include<iostream>
using namespace std;
class Rational
{
private:
	int  num;
	int  denum;
	void reduce()
	{
		int n = num, d = denum, rem;
		rem = n % d;
		while (rem != 0)
		{
			n = d;
			d = rem;
			rem = n % d;
		}
		num /= d;
		denum /= d;
	}
public:
	Rational();
	Rational(int);
	Rational(int, int);
	int getnum() const;
	int getdenum() const;
	void setnum(int);
	void setdenum(int);
	void set(int, int);
	Rational operator+(const Rational&);
	friend istream& operator>>(istream& input, Rational& r);
	friend ostream& operator<<(ostream& output, Rational& r);
	bool operator>(const Rational& r);
	bool operator&&(const Rational& r);
	bool operator||(const Rational& r);
	void operator~();
};
