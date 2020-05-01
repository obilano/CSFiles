/*
		Programmer:		Oberon Ilano
		Assignment:		11
		Description:	Program to compute penny salary.
		Date:			June 20, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
int day =1; // day starts at one
double salary =0.01; // penny value
// ask user for input
cout << "Enter the number day(s) you work: ";
cin >> day;

while (day <1 || day > 365) // if user enter value < 1 then cout error
	{
		cout << "ERROR: Re-enter a valid number of day(s): ";
		cin >> day;
	}
	
	cout << "Day       Salary" << endl;
// if user enter valid number for day	
	for (int time = 1; time <= day; time++) // time starts at one
		{
			cout << setw(3) << time << setw(8) << setprecision(2) 
				 << fixed << "$" << salary  <<endl;
			salary *= 2;	
		}
		
		
return 0;

}
