#include <iostream>
#include <string>

using namespace std;

const int NUM_EMP = 5;

int main()
{
	int hours[NUM_EMP]; //Array of employee hours
	string names[NUM_EMP]; //Array of employee names
	int count;

	cout << "This program keeps employee information.\n\n";
	for (count = 0; count < NUM_EMP; count++)
	{
		cout << "Enter employee name: ";
		cin >> names[count];
		cout << "Enter hours for " << names[count] << ": ";
		cin >> hours[count];
	}

	cout << "\nEmployee Hours Table\n";
	cout << "====================\n";
	for (count = 0; count < NUM_EMP; count++)
		cout << names[count] << " "
		<< hours[count] << endl;

	cout << endl;
	system("Pause");
	return 0;
}