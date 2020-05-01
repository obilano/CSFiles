#include <iostream>
#include <string>

using namespace std;

// Function Prototypes
int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main()
{
	int North, South, East, West, Central;

	cout << "\This program will conclude which region "
		<< "had the fewest reported traffic accidents.\n"
		<< endl;
	// Call function getNumAccidents once for each area.
	North = getNumAccidents("North");
	South = getNumAccidents("South");
	East = getNumAccidents("East");
	West = getNumAccidents("West");
	Central = getNumAccidents("Central");

	//Call function findLowest passing the 5 accidents
	findLowest(North, South, East, West, Central);
	
	system("Pause");
	return 0;
}

//getNumAccidents
int getNumAccidents(string Region)
{
	int Accidents;

	do
	{
		cout << "Enter the number of traffic accidents that were reported in the "
			<< Region << " region during last year: ";
		cin >> Accidents;
	
		if (Accidents < 0)
		{
			cout << "\nInvalid report!\n"
				<< "Accident number must be greater than 0.\n";
		}

	} while (!(Accidents > 0));
	cout << endl;

	return Accidents;
}

//findLowest
void findLowest(int North, int South, int East, int West, int Central)
{
	int Lowest;

	cout << "\nThe fewest reported traffic accidents last year were in the ";

	if (North < South &&
		North < East &&
		North < West &&
		North < Central)
	{
		Lowest = North;
		cout << "North ";
	}
	else if (South < North &&
		South < East &&
		South < West &&
		South < Central)
	{
		Lowest = South;
		cout << "South ";
	}
	else if (East < North &&
		East < South &&
		East < West &&
		East < Central)
	{
		Lowest = East;
		cout << "East ";
	}
	else if (West < North &&
		West < East &&
		West < South &&
		West < Central)
	{
		Lowest = West;
		cout << "West ";
	}
	else
	{
		Lowest = Central;
		cout << "Central ";
	}

	cout << "region with " << Lowest << " accidents.\n\n";
}