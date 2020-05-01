#include <iostream>

using namespace std;

int main()

{
	int totalSoup, cupSize, numberOfCups;

	cout << "This program calculates how many cups \n"
		<< "will be needed for a total ounces of soup.\n\n";

	cout << "Please enter the total ounces of soup: ";
	cin >> totalSoup;

	cout << "Please enter cup size in ounces: ";
	cin >> cupSize;



	if (cupSize > 0)
	{
		numberOfCups = totalSoup / cupSize;
		cout << "You need " << numberOfCups << endl << endl;
	}

	else if (cupSize <= 0)
	{
		cout << "Please enter cup size greater than 0!"
			<< endl;
	}
	system("Pause");

	return 0;

}