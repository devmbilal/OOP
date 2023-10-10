// Lab Task  03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void exn(char[], char[]);
void exn2(char[], int[]);
void stcp(char[], char[]);
int main()
{
	int const  size = 100;
	char st1[size], st2[size], st4[size];
	int st3[size];
	cout << "Name:Muhammad Bilal" << endl;
	cout << "Reg # 04072113022" << endl;
	cout << "Lab Task 03" << endl;
	cout << "Enter the String 1 : ";
	cin.get(st1, 100);
	cout << "Enter the String 2 :  ";
	cin.ignore(100, '\0');
	cin.get(st2, 100);
	cout << endl;
	cout << "            Menue Option   " << endl;
	cout << endl;
	cout << "   To  Compare                        enter      C / c" << endl;
	cout << "   To  Convert Char to Char Num       enter      A/ a" << endl;
	cout << "   To  Convert Char to Int            enter      I/ i" << endl;
	cout << "   To  Quit                           enter      Q / q" << endl;
	cout << endl;
	char choice;
	cout << "To Enter your choice :";
	cin >> choice;
	do
	{
		switch (choice)
		{
		case 'A':
		case 'a':
			exn(st1, st4);
			break;
		case 'C':
		case 'c':
			stcp(st1, st2);
			break;
		case 'I':
		case 'i':
			exn2(st1, st3);
			break;

		}
		cout << endl;
		cout << "                Menue Option" << endl;
		cout << endl;
		cout << "   To  Compare                        enter      C / c" << endl;
		cout << "   To  Convert Char to Char Num       enter      A/ a" << endl;
		cout << "   To  Convert Char to Int            enter      I/ i" << endl;
		cout << "   To  Quit                           enter      Q / q" << endl;
		cout << endl;
		cout << "To Enter your choice :";
		cin >> choice;

	} while (choice != 'q' && choice != 'Q');


}
void exn(char s1[], char  s2[])
{


	int i = 0, occ = 0;
	while (s1[i] != '\0')
	{

		if (s1[i] >= '0' && s1[i] <= '9')
		{
			s2[occ] = s1[i];
			occ++;
		}
		i++;
	}
	s2[occ] = '\0';
	if (occ != 0)
	{
		cout << "The Array is = {";
		for (int index = 0; index < occ; index++)
		{
			if ((occ - 1) > index)
			{
				cout << s2[index] << ",";
			}
			else
			{
				cout << s2[index];
			}

		}
		cout << "}" << endl;
	}
	else
	{
		cout << "The Extracted Array is empty" << endl;
	}
}
void exn2(char s1[], int s2[])
{
	int i = 0, occ = 0;
	while (i < 100)
	{

		if (s1[i] >= '0' && s1[i] <= '9')
		{
			s2[occ] = s1[i] - 48;
			occ++;
		}
		i++;
	}
	if (occ != 0)
	{
		cout << "The Array is = {";
		for (int index = 0; index < occ; index++)
		{
			if ((occ - 1) > index)
			{
				cout << s2[index] << ",";
			}
			else
			{
				cout << s2[index];
			}

		}
		cout << "}" << endl;
	}
	else
	{
		cout << "The Extracted Array is empty" << endl;
	}

}
void stcp(char s1[], char s2[])
{
	int i = 0;
	while (i < 100)
	{
		if (s1[i] > s2[i])
		{
			cout << "String 1 is greater than String 2" << endl;
		}
		if (s1[i] < s2[i])
		{
			cout << "String 2 is greater than String 1" << endl;
		}
		i++;
	}
	cout << "The Strings are equal" << endl;
}



