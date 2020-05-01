/*
		Programmer:		Oberon Ilano
		Assignment:		14B
		Description:	Program to compute membership fee.
		Date:			June 25, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
	int numYears = 0;
	double memberFee= 0, yearlyIncrease = 0.00;
	//ask user for input
	do
	{
		cout << "Enter membership rate (greater than zero): ";
		cin >> memberFee;
	} while (memberFee <= 0);
	
	do
	{
		cout << "Enter the percentage increase in decimals (greater than zero): ";
		cin >> yearlyIncrease;
	} while (yearlyIncrease <=0);
	
	do
	{
			cout << "Enter number of year (greater than zero): ";
			cin >> numYears;
	} while (numYears <=0);
	
	cout << "Year      Membership Fee" << endl;
	for (int year=1; year <= numYears; year++)
	{
		memberFee = memberFee + (memberFee * yearlyIncrease);
		
		cout << right << setw(3) << year << right << setw(10) << setprecision(2) 
			 << fixed << "$" << memberFee <<endl;
	}
	
return 0;

}
