/*
		Programmer:		Oberon Ilano
		Assignment:		12
		Description:	Program to compute hotel occupancy rate.
		Date:			June 22, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int floors = 0, rooms = 0, occupied = 0,
	totalUnoccupiedRooms = 0, totalRooms = 0, 
	totalOccupied = 0, num = 1;
	double percentOccupied;
	
	cout << "This program calculates the occupancy rate for a hotel"
		 << endl << endl;
//	Ask user's for the number of floors.	
	cout << "Enter number of floors: "; 
	cin >> floors;

	while (floors < 1)//	Validating information if less than 1
		  cout << "Number of floor must be at least 1." << endl 
	      << "Please re-enter the number of floors: ";
//	Increment for floor numbers
	for (int num = 1; num <= floors; num++) 
	{
// Ask user for number of rooms on a floor		
		cout << "Enter the number of rooms on the floor " << num << ": ";
		cin >> rooms; 

		while (rooms < 10)//	Validating if less than 10 rooms
			{
				cout << "Number of rooms on floor must be least 10." << endl 
					<< "Please re-enter the number of rooms on the floor: ";
				cin >> rooms;
			}
//	Input for how many rooms are occupied
			cout << "How many rooms are occupied on floor " << num <<"? ";
			cin >> occupied;
			
			while (occupied > rooms || occupied < 0)// Validating occupied room
			{
				cout << "Number of occupied rooms on floor must be 0 "
					 << "to equal to room numbers on floor " << num << endl 
				     << "Please re-enter the number of rooms occupied on the floor "
					 << num << ": ";
				cin >> occupied;	
			}
//	Calculating total of rooms and occupied rooms
		totalRooms += rooms; 
		totalOccupied += occupied; 
	}
//Calculates unccupied rooms
	totalUnoccupiedRooms = totalRooms - totalOccupied; 
// Calculates percentage of occupied rooms
	percentOccupied = (double)(totalOccupied * 100) / totalRooms;
	
	cout << endl << endl;
	cout << "The hotel has total of " << totalRooms << " rooms." << endl;
	cout << "There are " << totalOccupied << " rooms occupied." << endl;
	cout << "There are " << totalUnoccupiedRooms << " rooms unoccupied." << endl;
	cout << "Percentage of occupied rooms is " << setprecision(1) << fixed
		<< percentOccupied << " %." << endl;
	
	return 0;
}
