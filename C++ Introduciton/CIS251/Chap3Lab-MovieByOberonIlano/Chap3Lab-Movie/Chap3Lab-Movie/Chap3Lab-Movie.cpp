#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	
	double netBox, distributorCut, adultTickets, grossBox, childTickets;
	const int adultPrice = 10; 
	const int childPrice = 6;
	
	string movieName;
	cout << "Movie Name: ";
	getline(cin, movieName);

	cout << "Adult Tickets Sold: ";
	cin >> adultTickets;
	cout << "Child Tickets Sold: ";
	cin >> childTickets;

	grossBox = adultTickets * adultPrice + childTickets * childPrice;//Calculating gross box.

	netBox = grossBox * 0.20;  //Theather keeps 20 percent of the gross box office profit.

	distributorCut = grossBox - netBox;//Paid to Distributor.

	//left justified with setw(30)
	//right justified with setw(10) followed by " or $.
	cout << left << setw(30) << "Movie Name:" << right << setw(10) << '"' << movieName << '"' << endl;
	cout << left << setw(30) << "Adult Tickets Sold:" << right << setw(10) << " " << setw(5) << adultTickets << endl;
	cout << left << setw(30) << "Child Tickets Sold:" << right << setw(10) << " " << setw(5) << childTickets << endl;

	cout << setprecision(2) << fixed, showpoint;//Set the output formatting for numbers.

	cout << left << setw(30) << "Gross Box Office Profit:" << right << setw(10) << "$" << setw(8) << grossBox << endl;
	cout << left << setw(30) << "Net Box Office Profit:" << right << setw(10) << "$" << setw(8) << netBox << endl;
	cout << left << setw(30) << "Amount Paid to Distributor:" << right << setw(10) << "$" << setw(8) << distributorCut << endl << endl;


	system("Pause");
	return 0;

}