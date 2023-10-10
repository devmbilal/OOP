// Lab  Task  01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void calculator(int, char, int);
void sum(int , int, int&);
void factorial(int);
int main()
{
	cout <<"Name:Muhammad Bilal" << endl;
	cout << "Reg # 04072113022" << endl;
	cout << "Lab Task 01";
	cout << endl;
	cout << "            *****Menue Option*****" << endl;
	cout << endl;
	cout << "   To Use Calculator     enter	    C / c" << endl;
	cout << "   To Print Factorial    enter      F / f" << endl;
	cout << "   To Use Sum Function   enter      S / s" << endl;
	cout << "   To Quit               enter      Q / q" << endl;
	cout << endl;
	char choice;
	cout << "To Enter your choice :";
	cin >> choice;
	int n1, n2, result;
	do
	{
		switch (choice)
		{
		case 'C':
		case 'c':
			char oprt;
			cout << "Enter the Number 1 :";
			cin >> n1;
			cout << "Enter the Number 2 :";
			cin >> n2;
			cout << "The Operator menu is" << endl;
			cout << "Plus : +" << endl;
			cout << "Subtraction : -" << endl;
			cout << "Multiplication : *" << endl;
			cout << "Division : /" << endl;
			cout << "Enter the Operator : ";
			cin >> oprt;
			calculator(n1, oprt, n2);
			break;

		case 'F':
		case 'f':
			cout << "Enter the Number  :";
			cin >> n1;
		    factorial( n1);
			break;
		case 'S':
		case 's':
			cout << "Enter the Number 1 :";
			cin >> n1;
			cout << "Enter the Number 2 :";
			cin >> n2;
			sum(n1, n2, result);
			cout << "The Sum is : " << result << endl;
			break;
			
		}
		cout << endl;
		cout << "            *****Menue Option*****" << endl;
		cout << endl;
		cout << "   To Use Calculator    enter      C / c" << endl;
		cout << "   To Print Factorial   enter      F / f" << endl;
		cout << "   To Use Sum Function  enter      S / s" << endl;
		cout << "   To Quit              enter      Q / q" << endl;
		cout << endl;
		cout << "To Enter your choice :";
		cin >> choice;

	} while (choice != 'q' && choice != 'Q');


}
void calculator(int num1,char oprt,int num2)
{
	
		switch (oprt)
		{
		case '+':
			cout << "The sum of two numbers is=" << num1 + num2 << endl;
			break;
		case '-':
			cout << "The subtraction of these numbers=" << num1 - num2 << endl;
			break;
		case '*':
			cout << "The product of these numbers is=" << num1 * num2 << endl;
			break;
		case '/':
			cout << "The division of these numbers is =" << num1 / num2 << endl;
			break;
		}
}
void sum(int num1, int num2, int& sm)
{
	sm = num1 + num2;
}
void factorial(int num)
{
	int pr = 1;
	for (int i=1;i<=num;i++)
	{
		pr = pr * i;
	}
	cout << "The Factorial of a number is : " << pr << endl;
}