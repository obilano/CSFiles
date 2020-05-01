/*
		Programmer:		Oberon Ilano
		Description:	Program to compute average exam score
		Date:			June 4, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
using namespace std;
int main()
{		//	Declare and Initailize variables
	double exam1=0, exam2=0, exam3=0,
			totalExamScore=0, averageExamScore=0;
	cout << "This program computes the average exam score" << endl;
	
	//	Get inputs from user
	cout << "Enter the first exam score: ";
	cin >> exam1;
	cout << "Enter the second exam score: ";
	cin >> exam2;
	cout << "Enter the third exam score: ";
	cin >> exam3;
	
	//	Perform calculations
	totalExamScore = exam1 + exam2 + exam3;
	averageExamScore = totalExamScore/3;
	
	//	Output the total cost
	cout << "The average exam score is: "<<averageExamScore;
	return 0;
}
