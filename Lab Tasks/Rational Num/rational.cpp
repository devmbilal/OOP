#include<iostream>
#include"rational.h"
using namespace std;
Rational::Rational() :num(0), denum(1)
{}
Rational::Rational(int n)
{
	num = n;
	denum = 1;
}
Rational::Rational(int n, int d)
{
	num = n;
	denum = d != 0 ? d : 1;
	if (denum < 0)
	{
		num = -num;
		denum = -denum;
	}
	reduce();
}
int Rational::getnum() const
{
	return num;
}
int Rational::getdenum() const
{
	return denum;
}
void Rational::setnum(int n)
{
	num = n;
	reduce();
}
void Rational::setdenum(int d)
{
	denum = d != 0 ? d : 1;
	if (denum < 0)
	{
		num = -num;
		denum = -denum;
	}
	reduce();
}
void Rational::set(int n, int d)
{
	num = n;
	denum = d != 0 ? d : 1;
	if (denum < 0)
	{
		num = -num;
		denum = -denum;
	}
	reduce();
}
Rational Rational::operator+(const Rational& r)
{
	int d = denum * r.denum;
	int n = num * r.denum + denum * r.num;
	return Rational(n, d);
}
ostream& operator<<(ostream& output, Rational& r)
{
	cout << "The Object is : " << r.num << "/" << r.denum << endl;
	return output;
}
istream& operator>>(istream& input, Rational& r)
{
	cout << "Enter the Numerator : ";
	cin >> r.num;
	cout << "Enter the Denumerator : ";
	cin >> r.denum;
	return input;
}
bool Rational::operator>(const Rational& r)
{
	int z = num / denum;
	int k = r.num / r.denum;
	return (z > k);
}
bool Rational::operator&&(const Rational& r)
{
	int z = num / denum;
	int k = r.num / r.denum;
	return (z && k);
}
bool Rational::operator||(const Rational& r)
{
	int z = num / denum;
	int k = r.num / r.denum;
	return (z || k);
}
void Rational::operator~()
{
	num = -num;
}