
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	cout << "This program calculates the speed of sound. " << endl;

	int selected;
	int distance;
	double resultOfTime;

	const double Air = 1100;  //feet per second
	const double Water = 4900; //feet per second
	const double Steel = 16400; //feet per second
	
	cout << "\nPlease select your medium: \n\n";
	cout << "1. Air \n";
	cout << "2. Water \n";
	cout << "3. Steel \n";
	cout << "Enter your choice: ";
	cin >> selected;
	cout << "Enter the distance the sound wave will travel: ";
	cin >> distance;
	cout << setprecision(4) << fixed; //Set answer to four decimal places.

	if (distance == 0)
	{
		cout << "Distance must be greater than zero\n";
	}
	else if (selected >= 1 && selected <= 3)
	{
		switch (selected)
		{
		case 1: resultOfTime = distance / Air; //calculating
			break;
		case 2: resultOfTime = distance / Water;
			break;
		case 3: resultOfTime = distance / Steel;
		}

		cout << "The amount of time it will take to travel is ";
		cout << resultOfTime;
		cout << " seconds" << endl;
	}

	system("Pause");
	return 0;
}