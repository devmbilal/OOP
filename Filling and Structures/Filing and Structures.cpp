#include <iostream>
#include<fstream>
#include<string>
using namespace std;
struct dob
{
	int d, m, y;
};
struct student
{
	int id;
	char name[20];
	dob x;
	int marks;
	char dept[15];
	int smes;

};

void print(student[], int);
void add(student[], int&, int);
void find(student[], int);
void del(student[], int&);
void mod(student[], int);

int main()
{
	/*int size;
	cout <<"enter the size : ";
	cin >>size;
	fstream file("student.dat", ios::out | ios::binary );
	file.write((char*)&size, sizeof(size));
	student*s = new student[size];
	for (int i = 0; i < size; i++)
	{
		cout << "enter the data of the " << i + 1 << " student " << endl;
		cout << "enter the id : ";
		cin >> s[i].id;
		cin.ignore(10,'\n');
		cout << "enter the name : ";
		cin.get(s[i].name, 20);
		cin.ignore(10, '\n');
		cout << "enter the date of birth  " << endl;
		cout << "enter the date :  ";
		cin >> s[i].x.d;
		cout << "enter the month : ";
		cin >> s[i].x.m;
		cout << "enter the year :  ";
		cin >> s[i].x.y;
		cout << "enter the marks : ";
		cin >> s[i].marks;
		cout << "enter the smester : ";
		cin >> s[i].smes;
	}
	file.write((char*)s, sizeof(student)*size);
	delete []s;
	file.close();*/
	char choice;
	int cursize = 0, maxsize;
	fstream file("student.dat", ios::in | ios::binary);
	file.read((char*)&cursize, sizeof(cursize));
	maxsize = cursize + 5;
	student* s = new student[maxsize];
	file.read((char*)s, sizeof(student) * cursize);
	cout << endl;
	cout << "                Menu options" << endl;
	cout << endl;
	cout << "To Add record         Press A/a" << endl;
	cout << "To Modify record      press M/m" << endl;
	cout << "To Delete record      Press D /d" << endl;
	cout << "To Search record      Press S/s" << endl;
	cout << "To Print record       Press P/p" << endl;
	cout << "To Quit               Press Q/w" << endl;
	cout << "To Exist              Press E/e" << endl;
	cout << endl;
	cout << "Enter the choice : ";
	cin >> choice;
	cout << endl;
	do
	{
		switch (choice)
		{
		case 'p':
		case 'P':
			print(s, cursize);
			break;
		case'a':
		case 'A':
			if (cursize == maxsize)
			{
				cout << "You can not add any record because the adding limit is 5" << endl;
			}
			else
			{
				add(s, cursize, maxsize);
			}
			break;
		case 'F':
		case 'f':
			find(s, cursize);
			break;
		case 'd':
		case 'D':
			del(s, cursize);
			break;
		case 'M':
		case 'm':
			mod(s, cursize);
			break;
		case 'q':
		case 'Q':
		{
			fstream myfile("student.dat", ios::out | ios::binary);
			myfile.write((char*)&cursize, sizeof(cursize));
			myfile.write((char*)s, sizeof(student) * cursize);
			myfile.close();
			delete[]s;
			break;
		}
		}
		cout << endl;
		cout << "                Menu options" << endl;
		cout << endl;
		cout << "To Add record         Press A/a" << endl;
		cout << "To Modify record      press M/m" << endl;
		cout << "To Delete record      Press D /d" << endl;
		cout << "To Search record      Press S/s" << endl;
		cout << "To Print record       Press P/p" << endl;
		cout << "To Quit               Press Q/w" << endl;
		cout << "To Exist              Press E/e" << endl;
		cout << endl;
		cout << "Enter the choice : ";
		cin >> choice;
		cout << endl;
	} while (choice != 'e' && choice != 'E');

}
void print(student s[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "The Data of the " << i + 1 << " Student " << endl;
		cout << "The Id is : " << s[i].id << endl;
		cout << "The Name is : " << s[i].name << endl;
		cout << "The Date of birth is : " << s[i].x.d << "/" << s[i].x.m << "/" << s[i].x.y << endl;
		cout << "The Marks is : " << s[i].marks << endl;
		cout << "The Smester is : " << s[i].smes << endl;
		cout << ".........................................." << endl;
	}
}
void add(student s[], int& size, int mxsize)
{
	int i;
	char choice = 'y';
	for (i = size; i < mxsize && choice == 'y' || choice == 'Y'; i++)
	{
		cout << "Enter the data of the " << i + 1 << " Student " << endl;
		s[i].id = i + 1;
		cout << "The ID is : " << s[i].id << endl;
		cin.ignore(10, '\n');
		cout << "Enter the name : ";
		cin.get(s[i].name, 20);
		cin.ignore(10, '\n');
		cout << "Enter the date of birth  " << endl;
		cout << "Enter the date :  ";
		cin >> s[i].x.d;
		cout << "Enter the month : ";
		cin >> s[i].x.m;
		cout << "Enter the year :  ";
		cin >> s[i].x.y;
		cout << "Enter the marks : ";
		cin >> s[i].marks;
		cout << "Enter the smester : ";
		cin >> s[i].smes;
		cout << "Do you want to add another record press Y otherwise N : ";
		cin >> choice;
	}
	size = i;
}
void find(student s[], int size)
{
	int id, j;
	cout << "Enter the ID which you want to search : ";
	cin >> id;
	for (j = 0; j < size; j++)
	{
		if (id == s[j].id)
		{
			cout << "The Name is : " << s[j].name << endl;
			cout << "The Date of birth is : " << s[j].x.d << "/" << s[j].x.m << "/" << s[j].x.y << endl;
			cout << "The Marks is : " << s[j].marks << endl;
			cout << "The Smester is : " << s[j].smes << endl;
			break;
		}
	}
	if (j == size)
	{
		cout << "Id not found " << endl;
		find(s, size);
	}
}
void del(student s[], int& size)
{
	int j, id, k = 0;
	int cond = 0;
	cout << "Enter the ID which you want to delete : ";
	cin >> id;
	for (j = 0; j < size; j++)
	{
		if (id == s[j].id)
		{
			for (int i = j; i < size; i++)
			{
				s[i].id = s[i + 1].id;
				while (s[i + 1].name[k])
				{
					s[i].name[k] = s[i + 1].name[k];
					k++;
				}
				s[i].name[k] = '\0';
				s[i].x.d = s[i + 1].x.d;
				s[i].x.m = s[i + 1].x.m;
				s[i].x.y = s[i + 1].x.y;
				s[i].marks = s[i + 1].marks;
				s[i].smes = s[i + 1].smes;
			}
			size--;
			cond = 1;
		}
	}
	if (cond == 0)
	{
		cout << "ID not Found" << endl;
	}
}
void mod(student s[], int size)
{
	int id, j;
	char choice;
	cout << "Enter the ID which you want to modify : ";
	cin >> id;
	for (j = 0; j < size; j++)
	{
		if (id == s[j].id)
		{
			cout << "                Modify Options" << endl;
			cout << endl;
			cout << "To Modify Name         press N/n" << endl;
			cout << "To Modify Date         press D/d" << endl;
			cout << "To Modify Month        press M /m" << endl;
			cout << "To Modify Year         press Y/y" << endl;
			cout << "To Modify Smester      press S/s" << endl;
			cout << "To Modify Marks        press R/r" << endl;
			cout << "Enter the Choice : ";
			cout << endl;
			cin >> choice;
			switch (choice)
			{
			case 'N':
			case 'n':
				cin.ignore(10, '\n');
				cout << "Enter the name : ";
				cin.get(s[j].name, 20);
				cin.ignore(10, '\n');
				break;
			case 'Y':
			case 'y':
				cout << "Enter the Year : ";
				cin >> s[j].x.y;
				break;
			case 'M':
			case 'm':
				cout << "Enter the Month : ";
				cin >> s[j].x.m;
				break;
			case 'D':
			case 'd':
				cout << "Enter the Date : ";
				cin >> s[j].x.d;
				break;
			case 'R':
			case 'r':
				cout << "Enter the Marks : ";
				cin >> s[j].marks;
				break;
			case 'S':
			case 's':
				cout << "Enter the Smester : ";
				cin >> s[j].smes;
				break;
			}
		}

	}
}


