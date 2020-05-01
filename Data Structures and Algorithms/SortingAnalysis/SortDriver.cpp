/*********************************************************************
	Programmer:			Oberon Ilano
	Author(s):       	Dr. Janet Jenkins, Oberon Ilano	
	Project:			6 - Sort Routines
	Description:		This program wil allow users to sorts random 
						data numbers from text file. This program will
						also allow user to test sorting routines 
						including insertion sort, bubble sort, 
						quick sort, and merge sort with 10, 100, 1000, 
						and 10000 items. 					
	Due Date:			May 1, 2019
	Course:				CS355
**********************************************************************/
#include "Sort.h"
///////////////////FUNCTION PROTOTYPES///////////////////
void menu();
void buildTableSubMenu();
	
///////////////////////MAIN DRIVER///////////////////////
int main(){ 	
	Sort S; //intialized SORT variable
	int size = 0;
	int* list = NULL; //initialize array
	char option = ' ', choice = ' '; 
	menu(); //main menu option				
	do{	
		cin >> option;		
		switch (option){			
			case '0': cout << "Goodbye! " << endl;
				exit (1); break;		
			case '1': cout << "Fill Ordered " << endl;
            	cout << "Enter how many elements to be sorted (1 to 25): ";
				cin >> size; //number of  items to be sorted
				while((size < 1) || (size > 25)){
			        cout << "Please enter a valid Number (1 to 25):" << endl;
			        cin >> size;
    			}
				list  = new int[size]; //initialize dyanmic array 
				for(int i = 0; i < size; i++)
					list[i] = 0; //initial to zero
				S.FillOrdered(list, size); //fill array in ordered from text file
				cout << "\nArray has been filled." << endl << endl; break;
			case '2': cout << "Reverse Ordered" << endl;
				cout << "Enter how many elements to be sorted (1 to 25): ";
				cin >> size; //number of  items to be sorted
				while((size < 1) || (size > 25)){
			        cout << "Please enter a valid Number (1 to 25):" << endl;
			        cin >> size;
    			}
				list  = new int[size]; //initialize dyanmic array 
				for(int i = 0; i < size; i++)
					list[i] = 0; //initial to zero
				S.FillReversed(list, size); //fill array in reverse ordered from text file
				cout << "\nArray has been filled." << endl << endl; break;
            case '3': cout << "Random Ordered" << endl;
            	cout << "Enter how many elements to be sorted (1 to 25): ";
				cin >> size; //number of  items to be sorted
				while((size < 1) || (size > 25)){
			        cout << "Please enter a valid Number (1 to 25):" << endl;
			        cin >> size;
    			}
				list  = new int[size]; //initialize dyanmic array 
				for(int i = 0; i < size; i++)
					list[i] = 0; //initial to zero
				S.FillRandomed(list, size); //fill array in random ordered from text file
				cout << "\nArray has been filled." << endl << endl; break;						
			case '4': cout << "\nPrint Array:" << endl;
				S.Display(list, size); cout << endl << endl; break;
			case '5': cout << "\nInsertion-Sort has been applied!" << endl;  
				S.InsertionSort(list, size); cout << endl << endl; break;
			case '6': cout << "\nBubble-Sort has been applied!" << endl;
				S.BubbleSort(list, size); cout << endl << endl; break;
			case '7': cout << "\nQuick-sort has been applied!" << endl;
                S.QuickSort(list, 0, size - 1); cout << endl << endl; break; 
			case '8': cout << "\nMerge-sort has been applied! " << endl;
                S.MergeSort(list, 0, size - 1); cout << endl << endl; break;
            case '9': buildTableSubMenu();	 //sub menu to build table
                do{ 	     					                 
				    cin >> choice;       
                    switch(choice){              		
                        case '0': menu(); break; //back to main menu
                        case '1': S.OrderedTable(list); break;
                        case '2': S.ReversedTable(list); break;
                        case '3': S.RandomlyTable(list); break;
                        default: cout << "Invalid Choice! " << endl << endl;
                    }
                }while(choice != '0'); break; 
			default: cout << "Invalid Choice!" << endl << endl;
		}	
	}while (option != '0'); 
	delete [] list; 
	list = NULL;    
	
    return 0;
} 
///////////////////FUNCTION DEFINITION//////////////////////
/********************************************************
#Function Definition#
Name:			menu
Author(s):		Oberon Ilano
Purpose:		Use to select option from the keyboard
Incoming:		None
Outgoing:		main menu option (char)
Return:			None
*********************************************************/
void menu(){
	cout << "*************************" << endl
		 << "Order Program " << endl	     
		 << "1. Fill Array in Ordered" << endl
		 << "2. Fill Array in Reverse Ordered" << endl
		 << "3. Fill Array in Random Ordered" << endl 
		 << "4. Print Array" << endl
		 << "5. Test Insertion Sort" << endl
		 << "6. Test Bubble Sort" << endl
		 << "7. Test Quick Sort" << endl
		 << "8. Test Merge Sort" << endl
		 << "9. Build Sorting Analysis Table" << endl
		 << "0. Quit Program " << endl
		 << "Enter a valid choice: ";
}

/********************************************************
#Function Definition#
Name:			buidTableMenu
Author(s):		Oberon Ilano
Purpose:		sub menu, use to select option from 
				the keyboard
Incoming:		None
Outgoing:		sub menu option (char)
Return:			None
*********************************************************/
void buildTableSubMenu(){
    cout << "\nSorting Analysis Table" << endl
         << "1. In Ordered" << endl
         << "2. Reversed Ordered" << endl
         << "3. Randomly Ordered" << endl
         << "0. Main Menu" << endl
         << "Enter a valid choice: ";
}
