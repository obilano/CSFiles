/*
		Programmer:		Oberon Ilano
		Assignment:		9
		Description:	Program to compute student grade class.
		Date:			June 18, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
using namespace std;
int main()

{
int credit=0;
cout << "This program will compute a student Class Grade." << endl << endl;
// ask user for inputs
cout << "Enter your credits: ";
cin >> credit;
cout << endl;

if ((credit >= 0) && (credit <= 32))
	{
		cout << "Freshman" << endl;
	}
else
	if ((credit >= 33) && (credit <=64))
		{
			cout << "Sophomore" << endl;
		}
	else
		if ((credit >= 65) && (credit <=96))
		{	
			cout << "Junior" << endl;
		}
		else
			if (credit > 97)
				{
					cout << "Senior" << endl;
				}
			else
				cout << "Invalid Data. Please try again." << endl;
				
return 0;
}
