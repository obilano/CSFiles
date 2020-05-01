/*
		Programmer:		Oberon Ilano
		Assignment:		11
		Description:	Program to compute burn calories per minute.
		Date:			June 20, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <iomanip>
using namespace std;
const double CALORIES = 3.9; // calories burn per minute

int main()

{
	int min = 0;
	double calBurn = 0;
	
	cout << "Minute  Calories" << endl;
	
	min = 10;
	while(min < 31)
	{
		calBurn = CALORIES * min;
		cout << setw(3) << min << setw(11) << setprecision(2) 
			 << fixed << calBurn <<endl;
		min = min + 5;
	}
	
return 0;

}
