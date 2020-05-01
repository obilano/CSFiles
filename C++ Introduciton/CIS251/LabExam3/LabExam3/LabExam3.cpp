#include <iostream>


using namespace std;
//calcMPG()
void calcMPG(int, double, double);


int main()





{
	int milesDriven;
	double gallonUsed;
	double milesPerGallon;

	cout << "This program calculates the miles per gallon for a vehicle. " << endl;

	cout << "\nEnter the miles drive: ";
	cin >> milesDriven;
	cout << "\nEnter the gallons used: ";
	cin >> gallonUsed;
	
	milesPerGallon = milesDriven / gallonUsed;

	cout << "Miles driven: " << milesDriven << endl
		<< "Gallons used: " << gallonUsed << endl
		<< "MPG: " << milesPerGallon << endl << endl;

	system("Puase");
	return 0;
}
//calcMPG() funtion definition goes here

void calcMPG(int milesDriven, double gallonUsed, double milesPerGallon)
{

	milesPerGallon = milesDriven / gallonUsed;
	system("Pause");
	system("cls");
}