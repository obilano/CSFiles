/*
		Programmer:		Oberon Ilano
		Assignment:		21
		Description:	This program compute the min and max of exam scores
		Date:			July 11, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
void getExamScores (int &ex1, int &ex2, int &ex3);//PROTOTYPES
void exams (int ex1, int ex2, int ex3, int &min, int &max);//PROTOTYPES
using namespace std;

/***Main Driver Function***/
int main()
{
cout << "This program computes the exam highest and lowest scores." << endl;
int low = 0, high = 0, ex1 = 0, ex2 = 0, ex3 = 0;
char choice = ' ';

do
	{	
		getExamScores (ex1, ex2, ex3);
		exams (ex1, ex2, ex3, low, high);
		cout << endl;
		cout << "Low score: " << low << endl;
		cout << "High score: " << high << endl << endl;	
			
		cout << "Would you like to continue Y/N? ";
		cin >> choice;
		cout << endl;
	}while(choice == 'Y' || choice == 'y');
	
	return 0;
}

/****************************************************
##Function Definition#
Name:			getExtremesSCores
Purpose:		Use inputs exam scores from keyboard
Incoming:		None
Outgoing:		ex1 (int), ex2(int) and ex3 (int)
Return:			None		
*****************************************************/
void getExamScores (int &ex1, int &ex2, int &ex3)//parameters
{
do
	{
		cout << "Enter Exam 1 score: ";
		cin >> ex1;
	}while (ex1 < 0 || ex1 > 100);//validating ex1

do
	{
		cout << "Enter Exam 2 score: ";
		cin >> ex2;
	}while (ex2 < 0 || ex2 > 100);//validating ex2

do
	{
	cout << "Enter Exam 3 score: ";
	cin >> ex3;
	}while (ex3 <0 || ex3 > 100);//validating ex3
}

/*************************************************
#Function Definition#
Name:			extremes
Purpose:		Compute the maximum and mininum of
				exam scores
Incoming:		none		
Outgoing: 		min (int) and max (int)
Return: 		none
************************************************
*/
void exams (int ex1, int ex2, int ex3, int &min, int &max)// parameters
{ 																	
		max = ex1;
		if (ex2>max)
			max=ex2;
		if (ex3>max)
			max=ex3;
		
		min = ex1;
		if (ex2<min)
			min=ex2;
		if (ex3<min)
			min=ex3;
}

