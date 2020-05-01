/*
		Programmer:		Oberon Ilano
		Assignment:		
		Description:	Program to compute ocean level.
		Date:			June 20, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <iomanip>
using namespace std;
const double LEVEL_RISE = 1.5; // rising about 1.5 mm per year

int main()

{
	int year=0;
	double level=0;
	
	cout << "Year  Level" << endl;
	
	year = 1;
	while(year < 26)
	{
		level = LEVEL_RISE * year;
		cout << setw(3) << year << setw(8) << setprecision(2) 
			 << fixed << level << "mm" <<endl;
		year = year + 1;
	}
	
return 0;

}
