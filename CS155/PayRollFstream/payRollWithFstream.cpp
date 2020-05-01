/*
		Programmer:		Oberon Ilano
		Assignment:		17
		Description:	Program to compute pay roll. (fstream).
		Date:			July 4, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <fstream>
#include <iomanip>
const int MAX_CHARS = 30;
const double REGULAR_HOUR = 8.0;
using namespace std;
int main ()
{
	double payRate=0, hoursWorked=0, regularPay=0, 
		   doublePay=0, triplePay=0, totalPay=0;
	char employee[MAX_CHARS];
	ifstream input;
	input.open("pay-in-ilano.txt");
	//Test to see if thes was an error
	if (input.fail())
		{
			cout << "ERROR: Could not open the input file." << endl;
			exit(1);
		}
	
	ofstream output;
	output.open("pay-out-ilano.txt");
	if (output.fail())
		{
			cout << "ERROR: Could not open the output file." << endl;
			exit(1);
		}	
	//Read or write to the file
	while (!input.eof())
	{
	input >> ws;
	input.getline(employee, MAX_CHARS);
	input >> hoursWorked >> payRate;
	if (input)
		{
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
			for (int i=0; i<30; i++)
			cout << "="; 
			cout << endl;
		
		// output pay roll details to pay-out-ilano.txt	
		if (hoursWorked > 16.0)
			{
				
				output << "Employee: " << employee << endl;
				output << "Hours: " << setprecision(1) << fixed 
					   << hoursWorked << endl;
				output << "Rate: $" << setprecision(2) << fixed
					   << payRate << endl;
				output << "Regular Pay: $" << regularPay << endl;
				output << "Double Pay: $" << setprecision(2) << fixed 
					   << doublePay << endl;
				output << "Triple Pay: $" << setprecision(2) << fixed 
					   << triplePay << endl;
			}
		else if (hoursWorked > REGULAR_HOUR && hoursWorked <= 16.0)
			{
				output << "Employee: " << employee << endl;
				output << "Hours: " << setprecision(1) << fixed 
					   << hoursWorked << endl;
				output << "Rate: $" << setprecision(2) << fixed
					   << payRate << endl;
				output << "Regular Pay: $" << regularPay << endl;
				output << "Double Pay: $" << setprecision(2) << fixed 
					   << doublePay << endl;
			}
		else 
			{
				output << "Employee: " << employee << endl;
				output << "Hours: " << setprecision(1) << fixed 
					   << hoursWorked << endl;
				output << "Rate: $" << setprecision(2) << fixed
					   << payRate << endl;
				output << "Regular Pay: $" << regularPay << endl;
			}
		output << "Total Pay: $" << setprecision(2) << fixed 
			   << totalPay << endl;
		for (int i=0; i<30; i++)
			output << "="; 
			output << endl;	
		}	
	}
	input.close();

	
	return 0;
}
