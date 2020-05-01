/***************************************************************************/
//
//           GROUP:: Holden, Oberon, Antonio, and Darian
//           CLASS::  CS - 355
//           ASSIGNMENT::  Project #3 - Queue Manipulation
//           DATE::  03/21/2019
//           DESCRIPTION::  Queue class that contains different 
//                          methods that successfully navigate 
//                          throughout the queue.
//
/***************************************************************************/
#include "Queue.h"
#include <iostream>
#include <string>

using namespace std;

//***************************************************************************
//   MENU FUNCTION PROTOTYPE
//***************************************************************************
int Menu();

//***************************************************************************
//   MAIN PROGRAM FUNCTION
//***************************************************************************

int main()
{
    // QUEUE DECLARATION
    Queue<int> Q;
    Queue<int> P;
    Queue<int> W;

    char choice;

    // SWITCH STATEMENT FOR MAIN PROGRAM LOOP
    choice = Menu();
    while(choice != '0')
    {
        system("CLS");
 		switch(choice)
		{
            case '+': Q.Enq();                        // CASE TO INSERT INTO QUEUE
                      Q.Print(); cout << endl;
                      break;
    		
			case '-': Q.Deq();                        // CASE TO REMOVE FROM QUEUE
                      Q.Print(); cout << endl;
                    break;
    			
    		case '?': Q.Search();                     // CASE TO SEARCH FOR ITEM IN QUEUE
                      Q.Print(); cout << endl;
    		        break;

            case 'P': Q.Print(); cout << endl;        // PRINTS CURRENT QUEUE W/ CURRENT CURSOR POSITION
                    break;
            
            case '@': Q.PrintCursor(); cout << endl;  // PRINTS CURRENT CURSOR ITEM
                      Q.Print(); cout << endl;
                    break;
                    
            case '>': Q.moveRight();                  // MOVES CURSOR POSITION RIGHT
                      Q.Print(); cout << endl;
                    break;
                    
            case '<': Q.moveLeft();                   // MOVES CURSOR POSITION LEFT
                      Q.Print(); cout << endl;
                    break;
                    
            case 'b': Q.moveBegin();                  // MOVES CURSOR POSITION TO BEGINNING OF QUEUE
                      Q.Print(); cout << endl;
                    break;
                    
            case 'e': Q.moveEnd();                    // MOVES CURSOR POSITION TO THE END OF THE QUEUE
                      Q.Print(); cout << endl;
                    break;
                    
            case '1': W = Q;    						// CASE TO TEST THE COPY CONSTRUCTOR
					  cout << "Copied List" << endl;                        
                      W.Print(); cout << endl;
                      cout << "Original List" << endl; 
                      Q.Print(); cout << endl;
                    break;
                    
            case '2': P = Q;                            // CASE TO TEST THE ASSIGNMENT OPERATOR
                      cout << "Copied List" << endl;                        
                      P.Print(); cout << endl;
                      cout << "Original List" << endl; 
                      Q.Print(); cout << endl;
                    break;
                    
            case '3': Q.~Queue();                    // CASE TO TEST THE DECONSTRUCTOR
                      Q.Print(); cout << endl;
                    break;
                    
            case 'm': Menu();                        // CASE TO DISPLAY THE MENU
                      break;
                      
            case 'q': system("CLS");                         // CASE TO END PROGRAM
					  cout << "Thanks for testing" << endl;
					  return 0;
                      break;
                    
    	    default: cout << "Invalid Entry" << endl;      // DEFAULT FOR INVALID INPUT
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
    cout << "-. To Remove Item:" << endl;
    cout << "?X. To Search for Item:" << endl;
    cout << "P. To Print Entire Queue:" << endl;
    cout << "@. To Print Item at the Curser:" << endl;
    cout << ">. To Move The Curser To The Right:" << endl;
    cout << "<. To Move The Curser To The Left: " << endl;
    cout << "b. To Move The Curser To The Beginning:" << endl;
    cout << "e. To Move The Curser To The End: " << endl;
    cout << "1. To Test Copy Constructor: " << endl;
    cout << "2. To Test Assignment Constructor:" << endl;
    cout << "3. To Test Destructor: " << endl;
    cout << "m. To Display Menu: " << endl;
    cout << "q or 0. To Quit: " << endl;
    cin >> choice;
    cout << endl;
    
    return choice;
	
}
