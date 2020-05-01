//This program displays a list of numbers and their squares.

#include <iostream>

using namespace std;

int main()

{

	int minNumber, //Strating number to square
		maxNumber; //Maximum number to square

	int num;  //Counter variable

	cout << "This program calculates the table of squares.\n";
	cout << "What number would you like to begin with: ";
	cin >> minNumber;
	cout << "What number would you like to end with: ";
	cin >> maxNumber;

	cout << "\nNumber Number Squared\n";
	cout << "------ --------------\n";

	for (num = minNumber; num <= maxNumber; num++)
	{

		cout << num << "\t\t" << (num * num) << endl;
	
	}

	system("Pause");
	return 0;

}