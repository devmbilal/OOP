// Lab Task 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Communitymember
{
    string name;
    string cnic;
    int age;
public:
    Communitymember(char nm[], char cn[], int a) { name = nm; cnic = cn; age = a; }
    string getname() { return cnic; }
    string getcnic() { return name; }
    int getage() { return age; }
};
class Employee :public Communitymember
{
    string des;
public:
    Employee(char nm[], char cn[], int a, char ds[]) :Communitymember(nm, cn, a) { des = ds; }
    void showdatae()
    {
        cout << "The Name is :" << getname() << endl;
        cout << "The CNIC is :" << getcnic() << endl;
        cout << "The Age is :" << getage() << endl;
        cout << "The Designation is :" <<des<< endl;
    }
};
class Student :private Communitymember
{
    string smes;
public:
    Student(char nm[], char cn[], int a, char sm[]) :Communitymember(nm, cn, a) { smes = sm; }
    void showdatas()
    {
        cout << "The Name is :" << getname() << endl;
        cout << "The CNIC is :" << getcnic() << endl;
        cout << "The Age is :" << getage() << endl;
        cout << "The Smester  is :" << smes<< endl;
    }
};
class Alumnus :protected Communitymember
{
    int pasyear;
public:
   Alumnus(char nm[], char cn[], int a, int ps) :Communitymember(nm, cn, a) { pasyear = ps; }
    void showdataa()
    {
        cout << "The Name is :" << getname() << endl;
        cout << "The CNIC is :" << getcnic() << endl;
        cout << "The Age is :" << getage() << endl;
        cout << "The Passing Year  is :" << pasyear << endl;
    }
};
int main()
{ 
    char nm[20] = "Bilal";
    char cn[20] = "33104-50263013-3";
    int a = 20;
    char des[20] = "professor";
    char sm[20] = "second";
    int ps = 2020;


    Student s(nm, cn, a, sm);
    s.showdatas();

    Employee e(nm, cn, a, des);
    e.showdatae();

    Alumnus al(nm, cn,a,ps);
    al.showdataa();
}

