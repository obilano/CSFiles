/*
		Programmer:		Oberon Ilano
		Assignment:		8
		Description:	Program to compute the employee's payroll
		Date:			June 17, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
const int MAX_CHARS=15;
const double REGULAR_HOUR = 8.0;
int main()

{
char employee[MAX_CHARS];  // employee is a c-string
double payRate=0, hoursWorked=0, regularPay=0, 
		   doublePay=0, triplePay=0, totalPay=0;

cout << "This program compute Wally's Weekend Warrior Payroll." << endl;
// ask user for inputs
cout << "Enter employee's name: ";
cin.getline(employee, MAX_CHARS);
cout << "Enter pay rate: ";
cin >> payRate;
cout << "Enter your weekend hour(s): ";
cin >> hoursWorked;

cout << "*********************************" <<endl <<endl;
cout << "Wally's Weekend Warrior Payroll" <<endl <<endl;
// calculate double-time and triple-time hourly rate
// assuming taxes and etc . are not been taken out yet.
	if (hoursWorked > 16.0)// calculation for triple pay
			{
				regularPay = payRate * REGULAR_HOUR;
				doublePay = REGULAR_HOUR * (2 * payRate);
				triplePay = (hoursWorked - 16.0) * (3 * payRate);
				totalPay = regularPay + doublePay + triplePay;
				cout << "Employee: " << employee << endl;
				cout << "Hours: " << setprecision(1) << fixed 
					 << hoursWorked << endl;
				cout << "Rate: $" << setprecision(2) << fixed
					 << payRate << endl;
				cout << "Regular Pay: $" << regularPay << endl;
				cout << "Double Pay: $" << setprecision(2) << fixed 
					 << doublePay << endl;
					cout << "Triple Pay: $" << setprecision(2) << fixed 
					 << triplePay << endl;
			}
		//calucalte double pay
		else if (hoursWorked > REGULAR_HOUR && hoursWorked <= 16.0)
			{
				regularPay = payRate * REGULAR_HOUR;
				doublePay =  (hoursWorked - REGULAR_HOUR) * (2 * payRate);
				totalPay = regularPay + doublePay;
				cout << "Employee: " << employee << endl;
				cout << "Hours: " << setprecision(1) << fixed 
					 << hoursWorked << endl;
				cout << "Rate: $" << setprecision(2) << fixed
					 << payRate << endl;
				cout << "Regular Pay: $" << regularPay << endl;
				cout << "Double Pay: $" << setprecision(2) << fixed 
					 << doublePay << endl;
			}
		else //calculation for regular pay
			{
				regularPay = payRate * hoursWorked;
				totalPay = regularPay;
				cout << "Employee: " << employee << endl;
				cout << "Hours: " << setprecision(1) << fixed 
					 << hoursWorked << endl;
				cout << "Rate: $" << setprecision(2) << fixed
					 << payRate << endl;
				cout << "Regular Pay: $" << regularPay << endl;
			}
		
			cout << "Total Pay: $" << setprecision(2) << fixed 
			 << totalPay << endl;
	

return 0;
}
