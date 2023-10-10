#include<iostream>
using namespace std;
const int size = 50;
void sort(int[], int, char);
void avg(int[], int);
void median(int[], int);
void mode(int[], int);

int main()
{

    int arr[50];
    int num;
    cout << "Enter the number of students to be served : ";
    cin >> num;
    while (num < 0 || num>50)
    {
        cout << "*****The number of students should be between 0-50*****" << endl;
        cout << "Enter the number of students to be served again : ";
        cin >> num;
    }
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the number  of  movies that student " << i + 1 << " saw : ";
        cin >> arr[i];
        while (arr[i] < 0)
        {
            cout << "*****The number of movies should be positive*****" << endl;
            cout << "Enter the number  of  movies that student " << i + 1 << " saw  again : ";
            cin >> arr[i];
        }
    }
    cout << endl;
    cout << "            *****Array Operations*****" << endl;
    cout << endl;
    cout << "   To Sort           enter     S / s" << endl;
    cout << "   To Find Average   enter     A / a" << endl;
    cout << "   To Find Median    enter     M / m" << endl;
    cout << "   To Find Mode      enter     F / f" << endl;

    cout << endl;
    char choice;
    cout << "To Enter your choice :";
    cin >> choice;
    switch (choice)
    {
    case 's':
    case 'S':
        char ch;
        cout << "Enter * A * for Ascending and *D* for Descending : ";
        cin >> ch;
        sort(arr, num, ch);
        break;
    case 'A':
    case 'a':
        avg(arr, num);
        break;
    case'M':
    case 'm':
        median(arr, num);
        break;
    case 'F':
    case 'f':
        mode(arr, num);

    }







}
void sort(int arr[], int size, char choice)
{
    int i, j, last;
    switch (choice)
    {
    case 'a':
    case 'A':
        int max, maxindex;
        last = size - 1;
        for (i = last; i > 0; i--)
        {
            max = arr[i];
            maxindex = i;
            for (j = i - 1; j >= 0; j--)
            {
                if (arr[j] > max)
                {
                    max = arr[j];
                    maxindex = j;
                }
            }
            arr[maxindex] = arr[i];
            arr[i] = max;
        }
        cout << "The Array is = {";
        for (int index = 0; index < size; index++)
        {
            if ((size - 1) > index)
            {
                cout << arr[index] << ",";
            }
            else
            {
                cout << arr[index];
            }

        }
        cout << "}" << endl;
        break;
    case 'd':
    case 'D':
        int  min, minindex;
        last = size - 1;
        for (i = last; i > 0; i--)
        {
            min = arr[i];
            minindex = i;
            for (j = i - 1; j >= 0; j--)
            {
                if (arr[j] < min)
                {
                    max = arr[j];
                    maxindex = j;
                }
            }
            arr[minindex] = arr[i];
            arr[i] = min;
        }
        cout << "The Array is = {";
        for (int index = 0; index < size; index++)
        {
            if ((size - 1) > index)
            {
                cout << arr[index] << ",";
            }
            else
            {
                cout << arr[index];
            }

        }
        cout << "}" << endl;
        break;
    }

}
void avg(int arr[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];

    }
    double avg = sum / size;
    cout << "The Average is :" << avg << endl;

}
void median(int arr[], int size)
{
    int i, j, last;
    int max, maxindex;
    last = size - 1;
    for (i = last; i > 0; i--)
    {
        max = arr[i];
        maxindex = i;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > max)
            {
                max = arr[j];
                maxindex = j;
            }
        }
        arr[maxindex] = arr[i];
        arr[i] = max;
    }
    if (size % 2 == 0)
    {

        cout << "The median is " << ((arr[(size / 2) - 1] + arr[(size / 2)]) / 2.0);
    }
    else
    {
        cout << "The median is " << arr[size / 2] << endl;
    }
}
void mode(int arr[], int size)
{
    int counter = 0;
    for (int pass = 0; pass < size - 1; pass++)
    {
        for (int count = pass + 1; count < size; count++)
        {
            if (arr[count] == arr[pass])
                counter++;
            cout << "The mode is: " << counter << endl;
        }
    }
        
}
