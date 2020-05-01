/*
		Programmer:		Oberon Ilano
		Assignment:		26
		Description:	This program computes order of numbers
		Date:			July 18, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
const int MAX_ORDERS=200;
void getNum (int order[], int &orderNum);
void fillInOrder (int order[], int &orderNum);
void fillReverseOrder (int order[], int &orderNum);
void fillRandomOrder (int order[], int &orderNum);
void displayArray (int order[], int orderNum);
void menu();
int main()
{		
	int order[MAX_ORDERS] = {0};
	int orderNum = 0,  choice = 0;
	
	getNum (order, orderNum);
	
	do
		{
			menu();
			cin >> choice;				
				switch (choice)
					{				
						case 1:	cout << "Option: " << choice << endl;
								cout << "Fill in order " << endl << endl;
								fillInOrder (order, orderNum);
							break;
						case 2: cout << "Option: " << choice << endl;
								cout << "Fill in reverse order" << endl << endl;
								fillReverseOrder (order, orderNum);
							break;
						case 3: cout << "Option: " << choice << endl;
								cout << "Fill in random order" << endl << endl;
								fillRandomOrder (order, orderNum);
							break;
						case 4: cout << "Option: " << choice << endl;
								cout << "Display order " << endl << endl;
								displayArray (order, orderNum);
							break;
						case 5: cout << "Option: " << choice << endl;
								cout << "Goodbye! " << endl;
								exit (1);
							break;
						default: cout << "Option: " << choice << endl;
								 cout << "Invalid Choice.  " 
										 "Please enter valid number 1, 2, 3, 4, or 5."<< endl;
					}
			
		}while (choice != 5);
		
	return 0;
}

/*********************************************************
#Function Definition#
Name:			getNum
Purpose:		Input count of numbers from keyboard
				and store them to an array
Incoming:		None
Outgoing:		count of numbers in a set (array of int), 
				numbers in orders (int)
Return:			None
**********************************************************/
void getNum (int order
[], int &orderNum)
{
	do
		{
			cout << "Enter how many numbers: ";
			cin >> order[orderNum];
		}while (order[orderNum] < 1 || order[orderNum] > 200);
		orderNum++;
		/* TEST *  for (int i = 0; i < orderNum; i++)
		{
			cout << i+1 << right << setw(8) << order[i] << endl;
		}*/
}

/*************************************************
#Function Definition#
Name:			menu
Purpose:		Use to select option from the keyboard
Incoming:		None
Outgoing:		menu option (int)
Return:			None
***************************************************/
void menu()
{
	cout <<"Order Program" << endl;
	cout << "1. Fill in order" << endl;
	cout << "2. Fill in reverse Order" << endl;
	cout << "3. Fill in random Order" << endl;
	cout << "4. Display Order" << endl;
	cout << "5. Quit the Program" << endl;
	cout << "Enter Choice(1, 2, 3, 4, or 5): " << endl << endl;

}

/**********************************************
Name:			fillInOrder
Purpose:		compute set of incerement 
				numbers by 10 in an array
Incoming:		none 
Outgoing:		fillInOrder (array int)
Return:			none
**********************************************/
void fillInOrder (int order[], int &orderNum)
{

  	for (int i = 1; i <= order[orderNum-1]; i++)
  	{
    order[i] = i * 10;
	//test*  cout << i  << right << setw(8) << order[i] << endl;
	}
	
}

/************************************************
Name:			fillReverseOrder
Purpose:		compute set of decerement 
				numbers by 5 in an array
Incoming:		none
Outgoing:		fillReverseOrder (array int)
Return:			none
*************************************************/

void fillReverseOrder (int order[], int &orderNum)
{
	
	for (int i = 1; i <= order[orderNum-1]; i++)
	{	
		order[i] = 5005;
		order[i] = order[i] + (i * -5);
		 // test* cout << i  << right << setw(8) << order[i] << endl;
	}
	
}

/**********************************************
Name:			fillRandomOrder
Purpose:		compute set of numbers by 
				random in an array
Incoming:		none
Outgoing:		fillRandomOrder (array int)
Return:			none
**********************************************/
void fillRandomOrder (int order[], int &orderNum)
{

//srand(time(0));
for (int i = 0; i < order[orderNum]; i++)
	{
		order[i] = (rand() % 9000) + 1000;
		// Test*  cout << i << right << setw(8) << order[i] << endl;
	}
}

/************************************************
Name:			displayArray
Purpose:		Output order of numbers, 5 per
				line
Incoming:		number orders (array of int), 
				order numbers by increment, 
				decrement, or random (array int)
Outgoing:		orderNum (array int)
Return:			none
*************************************************/
void displayArray (int order[], int orderNum)
{
	for (int i = 0; i <= order[orderNum]; i++)
		{	
		cout << order[orderNum] << " ";
      
     	 if (i % 5 == 0)
     		{
        		cout << endl;
      		}
		//test*	cout << i << right << setw(8) << order[i] << endl;
		}
		cout  << endl;
}
