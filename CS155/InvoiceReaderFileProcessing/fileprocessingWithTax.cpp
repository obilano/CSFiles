/*
		Programmer:		Oberon Ilano
		Assignment:		16
		Description:	Program to open file (fstream).
		Date:			July 2, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <fstream>
#include <iomanip>
const double TAX_RATE = 0.085;
using namespace std;
int main ()
{
	int invoiceID = 0, productID = 0, quantity = 0;
	double total = 0, subtotal = 0, tax = 0, unitCost = 0;
	ifstream infile;
	infile.open("invoices2.txt");
	//Test to see if thes was an error
	if (infile.fail())
		{
			cout << "ERROR: Could not open the input file." << endl;
			exit(1);
		}
	
	ofstream outfile;
	outfile.open("report.txt");
	if (outfile.fail())
		{
			cout << "ERROR: Could not open the output file." << endl;
			exit(1);
		}	
	//Read or write to the file
	while (!infile.eof())
	{
	infile >> invoiceID >> productID >> quantity >> unitCost;
	if (infile)
		{
		subtotal = quantity * unitCost;
		tax = TAX_RATE * subtotal;
		total = subtotal + tax;
		cout << "Invoice # " << invoiceID << endl;
		cout << "Product # " << productID << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Unit Cost $" << setprecision(2) << fixed << unitCost << endl;
		cout << "Subtotal: $" << setprecision(2) << fixed << subtotal << endl;
		cout << "Tax: $" << setprecision(2) << fixed << tax << endl;
		cout << "Total: $" << setprecision(2) << fixed << total << endl;
		for (int i=0; i<30; i++)
			cout << "="; 
			cout << endl;
			
			
		outfile << "Invoice # " << invoiceID << endl;
		outfile<< "Product # " << productID << endl;
		outfile<< "Quantity: " << quantity << endl;
		outfile << "Unit Cost $" << setprecision(2) << fixed << unitCost << endl;
		outfile << "Unit Cost $" << setprecision(2) << fixed << unitCost << endl;
		outfile << "Subtotal: $" << setprecision(2) << fixed << subtotal << endl;
		outfile << "Tax: $" << setprecision(2) << fixed << tax << endl;
		outfile << "Total: $" << setprecision(2) << fixed << total << endl;
		for (int i=0; i<30; i++)
		outfile << "="; 
		outfile << endl;	
		}	
	}
	infile.close();
	
	return 0;
}
