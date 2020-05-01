/*
		Programmer:		Oberon Ilano
		Assignment:		2
		Description:	Program to compute the team scored total points
		Date:			June 5, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
using namespace std;
int main()
{		//	Declare and Initailize variables
	double touchdown=0, onePointPat=0, twoPointPat=0,
			fieldGoal=0, safeties=0, totalPoints=0;
	cout << "This program computes team scored total points" << endl;
	
	//	Get inputs from user
	cout << "Enter how many touchdown(s) are made: ";
	cin >> touchdown;
	cout << "Enter how many 1-point PAT are made: ";
	cin >> onePointPat;
	cout << "Enter how many 2-point PAT are made: ";
	cin >> twoPointPat;
	cout << "Enter how many field goal(s) are made: ";
	cin >> fieldGoal;
	cout << "Enter how many safeties are made: ";
	cin >> safeties;
	
	//	Perform calculations
	touchdown *= 6;
	onePointPat *= 1;
	twoPointPat *= 2;
	fieldGoal *= 3;
	safeties *= 2;
	totalPoints = touchdown + onePointPat + twoPointPat + fieldGoal + safeties;
	
	//	Output the total points
	cout << "The team total points is: "<<totalPoints;
	return 0;
}
