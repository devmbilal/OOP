#include<iostream>
#include"rational.h"
using namespace std;
int main()
{
	Rational r1, r2,r3;
	cout << "Enter the First Rational Number"<<endl;
	cin >> r1;
	cout << "Enter the Second  Rational Number" << endl;
	cin >> r2;
	cout << " + Operator " << endl;
	r3 = r1 + r2;
	cout << r3;
	cout << " < Operator " << endl;
	if (r1>r2)
	{
		cout << "The R1 is Greater than R2" << endl;
	}
	else
	{
		cout << "The Condition is Wrong" << endl;
	}
	cout << " || Operator " << endl;
	if (r1||r2)
	{
		cout << "The OR Operator is working" << endl;
	}
	cout << " && Operator " << endl;
	if (r1 && r2)
	{
		cout << "The && Operator is working" << endl;
	}
	cout << " ~ Operator " << endl;
	~r1;
	cout << r1;
	

}
