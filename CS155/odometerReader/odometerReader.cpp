/*
		Programmer:		Oberon Ilano
		Assignment:		7
		Description:	Program to compute the average speed
						the traveled during the trip.
		Date:			June 13, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
using namespace std;
int main()

{		//	Declare and Initailize variables
	double start=0, end=0, time=0, totalMiles=0, averageSpeed=0;
	cout << "This program computes the average speed the car traveled" << endl;
	
	//	Get inputs from user
	cout << "Enter the odometer of the car before travelling: ";
	cin >> start;
	cout << "Enter the odometer of the car after travelling: ";
	cin >> end;
	
	
	if (start > end)
		cout << "Invalid data." << endl;
	else
		{
			cout << "Enter the hour(s) you have been travelling: ";
			cin >> time;
			//	Perform calculations
			totalMiles = end - start;
			averageSpeed = totalMiles / time;
	
			//	Output the average speed
			cout << "The Average Speed is: " <<averageSpeed << "mph";
		}
	
	return 0;
}
