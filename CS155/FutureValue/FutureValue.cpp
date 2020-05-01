/*
		Programmer:		Oberon Ilano
		Assignment:		6
		Description:	Program to compute the Future Value & Total Interest Earned
		Date:			June 11, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const int MAX_CHARS=15;
int main()
{
	// Initiate Variables
	char member[MAX_CHARS]; // member is a c-string
	cout << "This program compute the future value and total interest earned." << endl;
	
	
	double principles=0, rate=0, futureValue, interestEarned=0; 
	int compoundingPerYear=0, year=0;
	
	// have user input
	cout << "Enter name: ";
	cin.getline(member, MAX_CHARS);
	cout << "Enter the principles: ";
	cin >> principles;
	cout << "Enter the annual rate in decimal: ";
	cin >> rate;
	cout << "Enter the number of compunding(s) per year: ";
	cin >> compoundingPerYear;
	cout << "Enter the year(s): ";
	cin >> year;
	
	// Perform a calculation
	futureValue = principles * pow((1 + (rate / compoundingPerYear)), compoundingPerYear * year);
	interestEarned = futureValue - principles;
	
	cout << "Member           Future Value      Total Interest Earned " << endl;
	cout << setw(9)  << left << member << setw(9) << right << setprecision(2) << "$"
		 << fixed  << futureValue << right << setw(15)  << setprecision(2) << "$"
		 << fixed  << interestEarned << endl; 

	
	return 0;
}
