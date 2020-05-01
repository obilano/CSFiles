/*
		Programmer:		Oberon Ilano
		Assignment:		20
		Description:	Program to compute total of carpet and paint needed for a room.
		Date:			July 10, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <cmath>
using namespace std;
const int CARPET_PRICE = 400, PAINT_PRICE = 200;
const int MAX_CHARS = 20;
double carpetArea(double length, double width); // FUNCTION PROTOTYPES 1
double paintDimension(double length, double width, double height); // FUNCTION PROTOTYPES 2
int main()
{	
	double length = 0, width = 0, height = 0, carpetA = 0,
		   paintD = 0, room = 0, grandTotal = 0;
	char choice = ' ', roomName[MAX_CHARS];
	
	cout << "This program computes the total carpet and paint that is needed. "<<endl;
	
	do
	{
		cout << "What is the name of the room? ";
		cin >> ws;
		cin.getline(roomName, MAX_CHARS);
		cout << "What is the length of the " << roomName << "? ";
		cin >> length;
		cout << "What is the width of the " << roomName << "? ";
		cin >> width;
		cout << "What is the height of the " << roomName << "? ";
		cin >> height;
		
		room++;
		grandTotal += CARPET_PRICE + PAINT_PRICE;
		cout << endl;
		cout << "Room Name: " << roomName << endl;
		cout << "Length: " << length << " ft" <<endl;
		cout << "Width: " << width << " ft"<< endl;
		cout << "Height: " << height << " ft" << endl;
		
		//call to  2 function with arguments passed
		carpetA = carpetArea(length, width);
		paintD = paintDimension(length, width, height);
		
		cout << "Do you need to add another room? Y/N? ";
		cin >> choice;
		cout << endl;
	}while(choice == 'Y' || choice == 'y');
		
		cout << "Total carpet cost is $" << CARPET_PRICE * room << "." <<endl;
		cout << "Total paint cost is $" << PAINT_PRICE * room << "." << endl;
		cout << "Grand total is $" << grandTotal << "." << endl;
		
	return 0;
}

/*
Function Definitions 1

Name:			carpetArea
Purpose:		This will compute the floor area of a room
Incoming:		length (double), width (double)			
Outgoing: 		The room floor area (double)
Return: 		The room floor area (double)
*/
double carpetArea(double length, double width) // Parameters
{ 										
	double carpetTotalArea = 0; //local variable
	if ((width > 0) || (length > 0)) //validating the area of a room
	   	 {
			carpetTotalArea = length * width; 
			cout << "The area to be carpeted is " << carpetTotalArea
				 << " square feet." << endl;
	 	 }
	else
	  {
	cout << "ERROR: Please enter valid number. "<< endl << endl;
			
	  }
	return carpetTotalArea;
}

/*Function Definitions 2

Name:			paintDimension
Purpose:		This will compute dimension of a room for paint.
Incoming:		length (double), width (double), height (double)			
Outgoing: 		The room's dimension (double)
Return: 		The room's dimension (double)
*/
double paintDimension(double length, double width, double height) // Parameters
{ 										
	double totalPaintD = 0; //local variable
	if ((height > 0) && (width > 0) && (length > 0)) //validating the dimension of a room
		 {
			totalPaintD = length * width * height; 
			cout << "The dimension to be painted is " << totalPaintD
				 << " cubic feet." << endl << endl;
	 	 }
	else
	  {
	cout << "ERROR: Please enter valid number. "<< endl << endl;
			
	  }
	return totalPaintD;
}

