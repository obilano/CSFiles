/*
		Programmer:		Oberon Ilano
		Assignment:		14A
		Description:	Program to compute membership fee.
		Date:			June 25, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <iomanip>
using namespace std;
const double yearlyIncrease = 0.04;
int main()
{
	double memberFee=2500;
	
	cout << "Year     Membership Fee" << endl;
	
	for (int year=1; year <= 6; year++)
	{
		memberFee = memberFee + (memberFee * yearlyIncrease);
		
		cout << left << setw(3) << year << right << setw(10) << setprecision(2) 
			 << fixed << "$" << memberFee <<endl;
	}
	
return 0;

}
