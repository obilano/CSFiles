/*
		Programmer:		Oberon Ilano
		Assignment:		10
		Description:	Program to compute Federal Taxes.
		Date:			June 19, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <iomanip>
using namespace std;
const double TAX_RATE1 = .10;
const double TAX_RATE2 = .25;
int main()

{
cout << "This program will compute Federal Taxes that owed." << endl << endl;
// set variables
char maritalStatus=0;
double totalAmount=0, taxableIncome=0;
// ask user for inputs
cout << "Enter the amount of taxable income: ";
cin >> taxableIncome;

cout << "What is your filling status? M = Married or S = Single : ";
cin >> maritalStatus;

if ((maritalStatus == 's' || maritalStatus == 'S') && (taxableIncome > 32000))
	{
		cout << "Your filling status is Single." << endl;
		totalAmount = taxableIncome * TAX_RATE2 + 3200;
		cout << "The Federal Tax you owed is $" << setprecision(2) << fixed << totalAmount << endl;
	}
else
	if ((maritalStatus == 's' || maritalStatus == 'S') && (taxableIncome <= 32000)  && (taxableIncome >= 0))
		{
			cout << "Your filling status is Single." << endl;
			totalAmount = taxableIncome * TAX_RATE1;
			cout << "The Federal Tax you owed $" << setprecision(2) << fixed << totalAmount << endl;
		}
	else
		if ((maritalStatus == 'm' || maritalStatus == 'M') && (taxableIncome > 64000))
		{	
			cout << "Your filling status is Married." << endl;
			totalAmount = taxableIncome * TAX_RATE2 + 6400;
			cout << "The Federal Tax you owed is $" << setprecision(2) << fixed << totalAmount << endl;
		}
		else
			if ((maritalStatus == 'm' || maritalStatus == 'M') && (taxableIncome <= 64000)  && (taxableIncome >= 0))
				{
					cout << "Your filling status is Married." << endl;
					totalAmount = taxableIncome * TAX_RATE1;
					cout << "The Federal Tax you owed is $" << setprecision(2) << fixed << totalAmount << endl;
				}
			else
				cout << "Invalid Data. Please try again." << endl;
				
return 0;
}
