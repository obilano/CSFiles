/*
		Programmer:		Oberon Ilano
		Assignment:		19
		Description:	Program to compute triangle area.
		Date:			July 9, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <cmath>
using namespace std;
double triangleArea(double side1, double side2, double side3); // FUNCTION PROTOTYPES
int main()
{	
	double side1 = 0, side2 = 0, side3 = 0, area =0;
	char choice = ' ';
	cout << "This program compute the area of a triangle. "<<endl;
	do
	{
		cout << "What is the length of the first side of a triangle? ";
		cin >> side1;
		cout << "What is the length of the second side of a traingle? ";
		cin >> side2;
		cout << "What is the length of the third side of a traingle? ";
		cin >> side3;
		//call to function with 3 arguments passed
		area = triangleArea(side1, side2, side3);
		
		cout << "Go again Y/N? ";
		cin >> choice;
		cout << endl;
	}while(choice == 'Y' || choice == 'y');

	return 0;
}
/*
Function Definitions

Name:			triangleArea
Purpose:		This will compute the area of  triangle
Incoming:		side 1 (double), side 2 (double), side 3 (double)			
Outgoing: 		The triangle area (double)
Return: 		The triangle area (double)
*/
double triangleArea(double side1, double side2, double side3) // Parameters
{ 										
	double totalArea = 0, sTotal = 0; //local variable
	if ((side3 + side1) > side2 && (side1 + side2) > side3
	    && (side2 + side3) > side1) //validating if lengths are valid to be a triangle
	  	{
			sTotal = (side1 + side2 + side3 ) / 2;
			totalArea = sqrt (sTotal * (sTotal - side1) * (sTotal - side2) 
					   * (sTotal - side3));
			cout << "The area of a triangle is " << totalArea << endl;
	 	 }
	else
	  {
	cout << "ERROR: Please enter valid number to make a triangle. "<< endl;
			
	  }
	return totalArea;
}
