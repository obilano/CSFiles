/*****************************************************************************/
//
//           GROUP:: Holden, Oberon, Antonio, and Darian
//           CLASS::  CS - 355
//           ASSIGNMENT::  Project #4 - BST Manipulation
//           DATE::  03/21/2019
//           DESCRIPTION::  Templated BST class that uses a dynamic linked 
//							structure for representation. It contains 
//							different methods that navigate throughout the BST.
//
/******************************************************************************/
#include "BST.h"
//***************************************************************************
//   MENU FUNCTION PROTOTYPE
//***************************************************************************
int Menu();
//***************************************************************************
//   MAIN PROGRAM FUNCTION
//***************************************************************************
int main()
{
	// BST DECLARATION
    BST<int> L;
    BST<int> copy;
    BST<int> Q;

	// SWITCH STATEMENT FOR MAIN PROGRAM LOOP
    char choice;
    choice = Menu();
    while(choice != '0')
    {
        system("CLS");
 		switch(choice)
		{
            case '+': L.Insert();			 //CASE TO INSERT INTO TREE
                      L.PrintInOrder(); cout << endl; 
                    break;
    		
			case '-': L.Delete(); 			 // CASE TO REMOVE A BST NODE FROM THE TREE
			          L.PrintInOrder(); cout << endl;
                    break;
    			
    		case '?': L.Search();	 		// CASE TO SEARCH FOR ITEM IN TREE
    		          L.PrintInOrder(); cout << endl;
    		        break;

            case 'P': L.PrintInOrder(); cout << endl; // CASE TO PRINT TREE IN ORDER
                      cout << endl;
                    break;
                    
            case 'S': L.PrintPostOrder(); cout << endl; // CASE TO PRINT TREE IN POST ORDER
                      cout << endl;
                    break;
                    
            case 'R': L.PrintPreOrder(); cout << endl; // CASE TO PRINT TREE IN PRE ORDER
                      cout << endl;
                    break;
            
            case 'B': L.BuildDataSet();			// CASE TO BUILD A LARGE DATA TREE FROM TEXT FILE
                      L.PrintInOrder();
                    break;
                    
            case '@': L.PrintCursor(); cout << endl; // CASE TO PRINT CURSOR
                      L.PrintInOrder(); cout << endl;
                    break;
                    
            case '>': L.moveRight();				// CASE TO MOVE CURSOR TO THE RIGHT FROM CURRENT POSITION
                      L.PrintInOrder(); cout << endl;
                    break;
                    
            case '<': L.moveLeft();					// CASE TO MOVE CURSOR TO THE LEFT FROM CURRENT POSITION
                      L.PrintInOrder(); cout << endl;
                    break;
                    
            case 'b': L.moveBegin();			// CASE TO MOVE CURSOR TO THE BEGINNING OF THE TREE FROM CURRENT POSITION
                      L.PrintInOrder(); cout << endl;
                    break;
                    
            case 'e': L.moveEnd();				// CASE TO MOVE CURSOR TO THE ENDING OF THE TREE FROM CURRENT POSITION
                      L.PrintInOrder(); cout << endl;
                    break;
                    
            case '1': Q = L;      					// CASE TO TEST THE COPY CONSTRUCTPOR
					  cout << "Original List" << endl;                      
                      L.PrintInOrder(); cout << endl;
                      cout << "Copied List" << endl;  
                      Q.PrintInOrder(); cout << endl;
                    break;
                    
            case '2': copy = L;						// CASE TO TEST THE ASSIGNMENT OPERATOR
                      cout << "Original List" << endl;                      
                      L.PrintInOrder(); cout << endl;
                      cout << "Copied List" << endl;  
                      copy.PrintInOrder(); cout << endl;
                    break;
                    
            case '3': L.~BST();						// CASE TO TEST THE DESTRUCTOR
                      L.PrintInOrder(); cout << endl;
                    break;
                      
            case 'q': system("CLS");			//	 CASE TO EXIT THE PROGRAM
					  cout << "Thanks for testing" << endl;
					  exit(1);
                      break;
                    
    	    default: cout << "Invalid Entry" << endl;
		}
        choice = Menu();	
	} 
	system("CLS");
	cout << "Thanks for testing" << endl;
	return 0;
}
//***************************************************************************
//   MENU FUNCTION DEFINITION
//***************************************************************************
int Menu()
{
	char choice;
    cout << "+X. To Insert Item:" << endl;
    cout << "-X. To Remove Item:" << endl;
    cout << "?X. To Search For An Item:" << endl;
    cout << "P. To Print List InOrder:" << endl;
    cout << "S. To Print List PostOrder:" << endl;
    cout << "R. To Print List PreOrder:" << endl;
    cout << "B. To Build a BST Using a Large DataSet:" << endl;
    cout << "@. To Print Item At the Curser:" << endl;
	cout << ">. To Move The Curser To The Right:" << endl;
    cout << "<. To Move The Curser To The Left:" << endl;
    cout << "b. To Move The Curser To The Beginning:" << endl;
    cout << "e. To Move The Curser To The End:" << endl;
    cout << "1. To Test Copy Constructor:" << endl;
    cout << "2. To Test Assignment Constructor:" << endl;
    cout << "3. To Test Destructor:" << endl;
    cout << "q or 0. To Quit:" << endl;
    cout << "Enter Choice: ";
    cin >> choice;
    cout << endl;
    
    return choice;
	
}
