/*
		Programmer:		Oberon Ilano
		Assignment:		24
		Description:	This program computes car inventory
		Date:			July 16, 2018
		Course:			CS155 - Computer Science I
*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
const int MAX_INV = 100;
void menu();
int main ()
{
	int inventory[MAX_INV];
	int storeNum = 0,  carValues = 0, choice = 0, quantity = 0;
	ifstream infile;
	infile.open("inventory.txt");
	if(infile.fail())
		{
			cout << "ERROR: infile could not be open. "<< endl;
			exit(1);
		}	
	ofstream outfile;
	outfile.open("updatedInventory.txt");	
	if(outfile.fail())
		{
			cout << "ERROR: outfile could not be open. "<< endl;
			exit(1);
		}	
	
	while (infile >> inventory[storeNum])
	storeNum++;
	infile.close();

	do
		{
		menu();
		cin >> choice;
			
			switch (choice)
			{				
				case 1:	cout << "Choice: " << choice << endl;
							cout << "Store Count" << endl;
							cout << "===== =====" << endl;
							for (int i = 0; i < storeNum; i++)
								{
									cout << left << setw(3)<< i+1 << right << setw(6) 
									   	 << inventory[i] << endl;
									outfile << left << setw(3)<< i+1 << right << setw(10) 
			   								<< inventory[i] << endl;	
								}
					break;
				case 2: cout << "Choice: " << choice << endl;
						cout << "Add some cars to a store" << endl;
						do
						{
							cout << "Store Number: ";
							cin >> carValues;
							}while (carValues < 1 || carValues > inventory[carValues]);
						
						do
						{
							cout << "Cars to add: ";
							cin >> quantity;
						} while(quantity < 1);						
						inventory[carValues - 1] += quantity;
					break;
				case 3: cout << "Choice: " << choice << endl;
						cout << "Remove some cars from store" << endl;
						do
							{
								cout << "Store Number: ";
								cin >> carValues;
							}while (carValues < 1 || carValues > inventory[carValues]);
							
						do
							{
								cout << "Cars to remove: ";
								cin >> quantity;
							} while(quantity < 1 || quantity > inventory[carValues-1]);						
							inventory[carValues - 1] -= quantity;
					break;
				case 4: cout << "Choice: " << choice << endl;
						cout << "Goodbye! " << endl;
						exit (1);
					break;
				default: cout << "Choice: " << choice << endl;
						 cout << "Invalid Choice.  " 
								 "Please enter valid number 1, 2, 3, or 4."<< endl;
			}
			
		}while (choice != 4);
	outfile.close();
		
	return 0;
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
	cout <<"Car Inventory Program" << endl << endl;
	cout << "1. Display the inventory of all stores" << endl;
	cout << "2. Add some cars to a store" << endl;
	cout << "3. Remove some cars from a store" << endl;
	cout << "4. Quit the Program" << endl;
	cout << "Enter Choice(1, 2, 3, or 4): " << endl;
	
}





