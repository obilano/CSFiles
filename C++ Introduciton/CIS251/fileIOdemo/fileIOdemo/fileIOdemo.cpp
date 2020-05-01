#include <iostream>
#include <fstream>
#include "fileIOdemo.h"

using namespace std;

int main()
{
	ifstream infile;
	ofstream outFile;
	double temp, sum = 0, avg, ctr = 0;

	cout << "This program reads temperatures from a data file.\n";

	infile.open("f:\\temperatures.txt");
	if (infile)
	{
		while (infile >> temp)
		{
			sum = sum + temp;
			ctr++;
		}
		cout << "There were " << ctr << " temperatures read.\n";
		avg = sum / ctr;
		cout << "The average temperature was " << avg << endl << endl;
	
	//Write duplicate output to file
	outFile.open("f:\\avgTempOutput.txt");
	outFile << "There were " << ctr << " temperatures read.\n";
	outFile << "The average temperature was " << avg << endl << endl;
	}
	else
		cout << "ERROR: Could not open data file.\n\n";

	system("Pause");
	return 0;
}