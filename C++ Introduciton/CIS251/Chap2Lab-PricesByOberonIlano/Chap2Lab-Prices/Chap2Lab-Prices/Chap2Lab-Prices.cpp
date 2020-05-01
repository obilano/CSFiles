#include <iostream>

using namespace std;

int main()
{
	const double TAX_RATE = .07;

	double item1 = 15.95;
	double item2 = 24.95;
	double item3 = 6.95;
	double item4 = 12.95;
	double item5 = 3.95;
	
	double subtotal;

	//Calculate subtotal, sales tax, and total

	subtotal = item1 + item2 + item3 + item4 + item5;

	double SaleTax1 = TAX_RATE * item1;
	double SaleTax2 = TAX_RATE * item2;
	double SaleTax3 = TAX_RATE * item3;
	double SaleTax4 = TAX_RATE * item4;
	double SaleTax5 = TAX_RATE * item5;

	double Total1 = SaleTax1 + item1;
	double Total2 = SaleTax2 + item2;
	double Total3 = SaleTax3 + item3;
	double Total4 = SaleTax4 + item4;
	double Total5 = SaleTax5 + item5;

	//Multiply subtotal by tax rate and store result in sales tax
	double SaleTax = subtotal * TAX_RATE;

	//Add subtotal to sales tax and store in total
	double Total = subtotal + SaleTax;

	//Output item prices, subtotal, sales tax and total
	cout << "*** Purchase Receipt ***\n";
	cout << "Item 1 Price: " << item1 << endl;
	cout << "Item 2 Price: " << item2 << endl;
	cout << "Item 3 Price: " << item3 << endl;
	cout << "Item 4 Price: " << item4 << endl;
	cout << "Item 5 Price: " << item5 << endl;
	cout << endl;

	//Output subtotal with proper label
	cout << "Subtotal Price: " << subtotal << endl;
	//Output sales tax with proper label
	cout << "Sale Tax Price: " << SaleTax << endl;

	//Output subtotal with proper label and blank line after

	cout << "Total: " << Total << endl;
	cout << endl;

	system("Pause");
	return 0;
}