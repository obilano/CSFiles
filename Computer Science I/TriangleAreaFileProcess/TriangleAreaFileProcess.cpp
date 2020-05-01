/*
		Programmer:		Oberon Ilano
		Assignment:		22
		Description:	This program compute the area of a triangle
		Date:			July 13, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <fstream>
#include <cmath>
void get_sides(double &side1, double &side2, double &side3); //FUNCTION PROTOTYPES
void triangleArea(double &side1, double &side2, double &side3, double &totalArea); //FUNCTION PROTOTYPES
using namespace std;

/***Main Driver Function***/
int main()
{
cout << "This program computes the area of a triangle." << endl;
double totalArea = 0, side1 = 0, side2 = 0, side3 = 0;
char choice = ' ';

ofstream outfile;//output to file (triangle.txt)
outfile.open("triangles.txt");
	if (outfile.fail())	
		{
		cout << "ERROR: Could not open the output file." << endl;
		exit(1);
		}
			
do
	{	
		get_sides (side1, side2, side3);
		triangleArea(side1, side2, side3, totalArea);
		cout << endl;
		cout << "The area of the triangle is " << totalArea << endl << endl;
		
		cout << "Would you like to do another one Y/N? ";
		cin >> choice;
		cout << endl;
			
		outfile << "Side 1 of the triangle: " << side1 << endl;	
		outfile << "Side 2 of the triangle: " << side2 << endl;
		outfile << "Side 3 of the triangle: " << side3 << endl;
		outfile << "The area of a triangle: " << totalArea << endl;
		for (int i=0; i<35; i++)
		outfile << "="; 
		outfile << endl;
		
	}while(choice == 'Y' || choice == 'y');
		
	outfile.close();
		
	return 0;
}

/*************************************************
#Function Definition#
Name:			getSides
Purpose:		Use to validate inputs sides of a triangle 
				from a keyboard
Incoming:		None
Outgoing:		side1 (double), side2(double) and 
				side3 (double)
Return:			None		
**************************************************/
void get_sides(double &side1, double &side2, double &side3)//parameters
{
do
	{
		cout << "Enter the side one's length: ";
		cin >> side1;
	}while (side1 <= 0 || (side3 + side1) <= side2 && (side1 + side2) <= side3
	    && (side2 + side3) <= side1);//validating side1 is greater than 0/of valid triangle

do
	{
		cout << "Enter the side two's length: ";
		cin >> side2;
	}while (side2 <= 0 || (side3 + side1) <= side2 && (side1 + side2) <= side3
	    && (side2 + side3) <= side1);//validating side2 is greater than 0/if valid triangle

do
	{
		cout << "Enter the side three's length: ";
		cin >> side3;
	}while (side3 <= 0 || (side3 + side1) <= side2 && (side1 + side2) <= side3
	    && (side2 + side3) <= side1);//validating side3 is greater than 0/if valid triangle

}

/*************************************************
#Function Definition#
Name:			triangleArea
Purpose:		This will compute the total area of a triangle
Incoming:		none			
Outgoing: 		totalArea (double)
Return: 		none
*/
void triangleArea(double &side1, double &side2, double &side3, double &totalArea) // Parameters
{ 										
	double sTotal = 0; //local variable
	sTotal = (side1 + side2 + side3 ) / 2;
	totalArea = sqrt (sTotal * (sTotal - side1) * (sTotal - side2) 
					 * (sTotal - side3));
}
