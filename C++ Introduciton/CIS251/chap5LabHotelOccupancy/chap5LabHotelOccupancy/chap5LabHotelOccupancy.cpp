#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int roomsOnFloor = 0;
	int totalRooms = 0;
	int totalFloors = 0;
	int occupiedRoomsOnFloor = 0; 
	int totalOccupiedRooms = 0;
	int totalUnoccupiedRooms = 0;
	int i = 1;
	double percentOccupied;

	cout << "This program calculates the occupancy rate for a hotel"
		<< endl << endl;

	cout << "Enter number of floors: "; //Ask user's for the number of floors.
	cin >> totalFloors;

	while (totalFloors < 1)
		cout << "Number of floor must be at least 1.\n" //Validating information if less than 1
		<< "Please re-enter the number of floors: ";
	
	for (int i = 1; i <= totalFloors; i++) //Increment for floor numbers
	{
		if (i != 13) //Skip 13th floor
		{
			cout << "Enter the number of rooms on the floor " << i << ": ";
			cin >> roomsOnFloor; // Ask user for number of rooms on a floor

			while (roomsOnFloor < 5)
			{
				cout << "Number of rooms on floor must be at least 10.\n" //Validating if less than 5 rooms.
					<< "Please re-enter the number of rooms on the floor: ";
				cin >> roomsOnFloor;
			}
			cout << "How many rooms are occupied? ";//Input for how many rooms are occupied
			cin >> occupiedRoomsOnFloor;
		}
		totalRooms += roomsOnFloor; 
		totalOccupiedRooms += occupiedRoomsOnFloor;
	}
	totalUnoccupiedRooms = totalRooms - totalOccupiedRooms; //Calculates unccupied rooms
	percentOccupied = static_cast<double>(totalOccupiedRooms) * 100 / totalRooms;// Calculates percentage (float) of occupied rooms

	cout << "The hotel has total of " << totalRooms << " rooms\n";
	cout << "There are " << totalOccupiedRooms << " rooms occupied\n";
	cout << "There are " << totalUnoccupiedRooms << " rooms unoccupied\n";
	cout << "Percentage of occupied rooms is " << setprecision(2) << fixed
		<< percentOccupied << " %\n";

	system("Pause");
	return 0;
}