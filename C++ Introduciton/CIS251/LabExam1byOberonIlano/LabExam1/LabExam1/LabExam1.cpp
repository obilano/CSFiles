//This program will calculate the discounted price of the purchase.

#include <iostream>

using namespace std;

int main()

{
	double purchasePrice, discPrice, TotaldiscPrice;
	const double DISC_AMT = 0.15;
	
	cout << "This program will calculate the discounted price of your purchase." << endl;
	cout << endl;

	cout << "Enter a Purchase Price: "; //Ask the user to enter a purchase price.
	cin >> purchasePrice;

	discPrice = purchasePrice * DISC_AMT; //Multiply the price time the DISC_AMT.
	TotaldiscPrice = purchasePrice - discPrice; //Subtract the value from the price.
	
	cout << "Total Purchase with Discount: " << TotaldiscPrice << endl; //Displaying discounted price.

	system("Pause");
	return 0;
}