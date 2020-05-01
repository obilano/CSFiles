/*
		Programmer:		Oberon Ilano
		Assignment:		5
		Description:	Program to compute the other side of the triangle.
		Date:			June 11, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()

{
	// Initiate Variables
	double side1=0.0, side2=0.0, hypotenuse=0.0;
	cout << "This program compute the second side of a triangle" << endl;
	
	// Have user input of the first side and the hypotenuse of a triangle
	// assuming the unit measure is in feet
	cout << "Enter the hypotenuse of a triangle in feet: ";
	cin >> hypotenuse;
	cout << "Enter the first side of a triangle in feet: ";
	cin >> side1;
	
	// Perform a calculation
	side2 = sqrt(pow(hypotenuse, 2) + pow(side1, 2));
	cout << "The length of the second side of a triangle is: " << setprecision(2) << fixed << side2  << " ft." << endl;	
	return 0;
}
