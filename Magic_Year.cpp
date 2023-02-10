#include<iostream>

using namespace std;

int main()
	{
	//Program for displaying magic year
	int day, month, year;
	cout << "Enter day, month and year in two digits: ";
	cin >> day >> month >> year;
	cout << day << "/" << month << "/" << year<<endl;
	if (day*month == year)
	{
	cout << "The date is magic! "<<endl;
	}
	else
	cout << "The date is not magic!"<<endl;



	return 0;
	}