/********************************************************************************/
//
//           GROUP:: Holden, Oberon, Antonio, and Darian
//           CLASS::  CS - 355
//           ASSIGNMENT::  Project #5 - Shortest Path 
//           DATE::  April 11, 2019
//           DESCRIPTION:: This program will help demonstrate the shortest 
//							path. The front end will show the back end works.
//							The back end will solve the shortest path algorithm.
//
/********************************************************************************/
#include "BinaryHeap.h"

int Menu();
void customGraph(BinaryHeap &graph);
int main() 
{ 
    int destination;
    char choice; 
    BinaryHeap graph(ROWS * COLS);
    customGraph(graph);
    
    choice = Menu();
    while(choice != 'Q')
    {
        system("CLS");
 		switch(choice)
		{
            case '+': cin >> destination;
                      graph.ShortestPath(0, destination); 
                    break;
                    
            case 'S': system("Photo.JPG");
                      system("pause");
                      system("taskkill /im Microsoft.Photos.exe /f");
                      system("CLS");
                    break;
            
            default: cout << "Invalid Choice" << endl;
        }
        choice = Menu();
    }
    system("CLS");
	cout << "Thanks for Testing" << endl;
  
    return 0; 
} 

//***************************************************************************
//  Method: Menu
//
//  Desciption: This Method will print out a menu for the user to enter their 
//				choice(char)
//  
//  Incoming Data:
//          N/A
//  Outgoing Data: menu option (char)
//
//  Author: Darian  
//
//  Modified: Oberon
// 
//  Testers: Darian, Holden, Antonio, Oberon 
//***************************************************************************
int Menu()
{
    char choice;
    cout << "List of Locations" << endl;
    cout << "----------------------- " << endl;
    cout << "1.) Intersection 1 (N Wood Ave & Hermitage Dr)" << endl;
    cout << "2.) Intersection 2 (N Wood Ave & E Irvine Ave)" << endl;
    cout << "3.) Intersection 3 (E Tuscaloosa St & N Seminary St)" << endl;
    cout << "4.) Intersection 4 (Hermitage Dr & N Seminary St)" << endl;
    cout << "5.) Intersection 5 (E Irvine Ave & N Seminary St)" << endl;
    cout << "6.) Intersection 6 (W Tuscaloosa St & N Court St)" << endl;
    cout << "7.) Intersection 7 (N Court St & Hermitage Dr)" << endl;
    cout << "8.) Intersection 8 (N Pine St & W Tuscaloosa St)" << endl;
    cout << "9.) Coby Hall" << endl;
    cout << "----------------------- " << endl << endl;
	cout << "+ - Find and output shortest path from Florence Library to (+Numbered Location)" << endl;
	cout << "S - Show map (S)" << endl;
	cout << "Q - Quit (Q)" << endl;
    cin >> choice; 
    cout << endl;
    
    return choice;
}

//******************************************************************************
//  Method: customGraph                                                       
//
//  Description: Use to input data from file to the graph
//
//  Incoming Data:  Integer data that input to source, destination and weight
//
//  Outgoing Data: data value for source(int), destination(int), and weight(int)
//
//  Authors: Holden
//
//  Modified: Oberon
//
//  Testers: Darian, Holden, Antonio, Oberon
//******************************************************************************
void customGraph(BinaryHeap &graph)
{
	int s = 0, d = 0, w = 0;
    ifstream infile("graph.txt"); 
    if(infile.fail())
    { 
        cout << "Cannot be open " << endl;
        int main(); // back to main menu
    }      
    while (infile >> s >> d >> w)
    {
        graph.addEdge(s, d, w);       
    }
    infile.close();
}

