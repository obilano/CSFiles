/****************************************************************
		Programmer:		Oberon Ilano
		Assignment:		Assignment 3
		Description:	This program calculate football Scores.
		Date:			August 30, 2018
		Course:			CS255 - Computer Science II
****************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
/***************************************************************
           				Contstants
****************************************************************/
const int MAX = 10;
/***************************************************************
          			 Function Declarations
****************************************************************/
void menu();//Function Prototypes for displaying menu option
void fillArray (string teamN[], int qtr1[], int qtr2[], int qtr3[], 
int qtr4[], int& size);//Function Prototypes fill array from file
void printArray (string teamN[], int qtr1[], int qtr2[], int qtr3[], 
int qtr4[], int total[], int size);//Function Prototypes for displaying array
string getMax (string teamN[], int qtrS[], 
int size);//Function Prototypes for displaying the team name with highest score
int main()
	{
		string tName[MAX];
		int q1[MAX], q2[MAX], q3[MAX], q4[MAX], total[MAX];
		int size = 0, option = 0;
		do
			{
				menu();
				cin >> option;				
					switch (option)
						{			
							case 0: cout << "Option: " << option << endl;
									cout << "Goodbye! " << endl;
									exit (1);
									break;	
							case 1:	cout << "Option: " << option << endl;
									cout << "Fill in the Teams & Scores " 
										 << endl << endl;
									fillArray (tName, q1, q2, q3, q4, size);
									break;
							case 2: cout << "Option: " << option << endl;
									printArray (tName, q1, q2, q3, q4, total, size);
									break;
							case 3: cout << "Option: " << option << endl;
									cout << "3. Highest Score " 
										 << endl << endl;
									cout << "Team with the highest scores is " 
										 << getMax (tName, total, size) 
										 << endl << endl;
									break;
							default: cout << "Option: " << option<< endl;
									 cout << "Invalid Choice." 
											 "Please enter valid number 1, 2, 3, "
											 "or 0 to quit." 
										  << endl;
						}	
			}while (option != 0);
	 return 0;
	}
/********************************************************
#Function Definition#
Name:			menu
Purpose:		Use to select option from the keyboard
Incoming:		None
Outgoing:		menu option (int)
Return:			None
*********************************************************/
void menu()
{
	//option selection
	cout << "Order Program " << endl;
	cout << "1. Fill in the Team & Scores" << endl;
	cout << "2. Display Teams, Quarter Scores, & Final Scores " << endl;
	cout << "3. Highest Score " << endl;
	cout << "0. Quit Program " << endl;
	cout << "Enter Option(1, 2, 3, or 0 to quit): " << endl << endl;
}

void fillArray (string teamN[], int qtr1[], int qtr2[], int qtr3[], 
int qtr4[], int& size)
	{
		 //get Filename
		 string filename;
		 cout << "Enter filename: ";
		 cin >> filename;
		//open file and check errors
		ifstream openMe;
		openMe.open(filename.c_str()); // open string as old style cstring
		if (openMe.fail())
		   	{
		       	cout << "FILE NOT FOUND" << endl;
		       	exit(1);
		    }
		int index = 0;
		//inputing files to array
		while (openMe >> teamN[index] >> qtr1[index] >> qtr2[index] 
					  >> qtr3[index] >> qtr4[index])
		      index++;
		size = index;
		openMe.close();//close file
	}
/*****************************************************************
#Function Definition#
Name:			printArray
Purpose:		display team names (string), scores of 
				4 different quarters (int), and the totals (int)
Incoming:		team names (string), quarters (qtrs int) and 
				values (size, int), total (int)
Outgoing:		size(index, int)
Return:			None
*****************************************************************/			
void printArray (string teamN[], int qtr1[], int qtr2[], int qtr3[], 
int qtr4[], int total[], int size)
	{
		cout << "Team\tQ1\tQ2\tQ3\tQ4\tTotal" << endl;
		cout << "*********************************************" << endl;
		 for (int i = 0;i < size; i++)
		     {
		       total[i] = qtr1[i] + qtr2[i] + qtr3[i] + qtr4[i];
		       cout << teamN[i] << "\t" << qtr1[i] <<"\t" << qtr2[i] 
			   		<< "\t" << qtr3[i] << "\t" << qtr4[i] << "\t" 
			   		<< total[i] << endl;
		     }
		cout << endl;
	}
/*****************************************************************
#Function Definition#
Name:			getMax
Purpose:		determine which team has the highest score
				(in the 4th quarter for this program)
Incoming:		none
Outgoing:		team with highest score (string)
Return:			None
*****************************************************************/		
string getMax (string teamN[], int qtrS[], int size)
	{
		int maxIndex = 0;
		for (int i = 0; i < size; i++)
		    {
		    	if (qtrS[maxIndex] < qtrS[i])
		    	maxIndex = i;
		    }
		return teamN[maxIndex];
	}
