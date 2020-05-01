#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int floors = 0, rooms = 0, occupied = 0;
	int totalUnoccupiedRooms = 0, totalRooms = 0, 
		totalOccupied = 0;
	double percentOccupied;
	int num = 1;
	cout << "This program calculates the occupancy rate for a hotel"
		<< endl << endl;

	cout << "Enter number of floors: "; //Ask user's for the number of floors.
	cin >> floors;

	while (floors < 1)
		cout << "Number of floor must be at least 1.\n" //Validating information if less than 1
		<< "Please re-enter the number of floors: ";

	for (int num = 1; num <= floors; num++) //Increment for floor numbers
	{
		
		if (num != 13) //Skip 13th floor
		{
			cout << "Enter the number of rooms on the floor " << num << ": ";
			cin >> rooms; // Ask user for number of rooms on a floor

			while (rooms < 5)
			{
				cout << "Number of rooms on floor must be at least 5.\n" //Validating if less than 5 rooms.
					<< "Please re-enter the number of rooms on the floor: ";
				cin >> rooms;
			}
			cout << "How many rooms are occupied? ";//Input for how many rooms are occupied
			cin >> occupied;

		}

		totalRooms += rooms;
		totalOccupied += occupied;
	}

	totalUnoccupiedRooms = totalRooms - totalOccupied; //Calculates unccupied rooms
	percentOccupied = static_cast<double>(totalOccupied) * 100 / totalRooms;// Calculates percentage of occupied rooms

	cout << "The hotel has total of " << totalRooms << " rooms\n";
	cout << "There are " << totalOccupied << " rooms occupied\n";
	cout << "There are " << totalUnoccupiedRooms << " rooms unoccupied\n";
	cout << "Percentage of occupied rooms is " << setprecision(2) << fixed
		<< percentOccupied << " %\n";

	system("Pause");
	return 0;
}
//Note: int divided by int yields an int. You'll need to use 
//  type-casting. Do not define other variables as double. 