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
	double calBurn = 0;
	
	cout << "Minute  Calories" << endl;
	
	for (int min=1; min <= 31; min++)
	{
		calBurn = CALORIES * min;
		cout << setw(3) << min << setw(11) << setprecision(2) 
			 << fixed << calBurn <<endl;
	}
	
return 0;

}
