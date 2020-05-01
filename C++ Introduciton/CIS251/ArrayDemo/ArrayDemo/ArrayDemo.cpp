#include <iostream>

using namespace std;

const int NUM_EMP = 5;

int main()
{
	int hours[NUM_EMP]; //Array of employee hours
	int count;

	cout << "This program keeps employee hours.\n\n";
	for (count = 0; count < NUM_EMP; count++)
	{
		cout << "Enter hours for employee #"
			<< count + 1 << ": "; // Add one to start the display with 1
		cin >> hours[count];
	}

	cout << "\nEmployee Hours Table\n";
	cout << "====================\n";
	for (count = 0; count < NUM_EMP; count++)
		cout << "Enter hours for employee #"
		<< count + 1 << ": " << hours[count]// Add one to start the display with 1
		<< endl;

	cout << endl;
	system("Pause");
	return 0;
}
