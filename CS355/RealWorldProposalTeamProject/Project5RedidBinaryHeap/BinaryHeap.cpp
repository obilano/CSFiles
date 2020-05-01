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

//***************************************************************************
//  Constructor that initializes all of the member variables of the heap
//
//  Authors: Antonio
//
//  Testers: Darian, Holden, Antonio, Oberon
//***************************************************************************

BinaryHeap::BinaryHeap(int V) 
{ 
    capacity = V;
    heap_size = 0;
    heapArray = new int[V * V]; 
    
     for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
                graph[i][j] = 0;
        }
    }
} 
//***************************************************************************
//  Method: addEdge                                                       
//
//  Description: to add an edge in the graph
//
//  Incoming Data: source(int), destination(int) and weight (int)        
//
//  Outgoing Data: source(int), destination(int) and weight (int)
//       
//  Authors: Oberon, Antonio
//
//  Testers: Darian, Holden, Antonio, Oberon
//***************************************************************************
void BinaryHeap::addEdge(int source, int destination, int weight) 
{
    graph[source][destination] = weight;
} 


//***************************************************************************
//  Method: ShortestPath 
//
//  Description: This method will implement shortest path algorithm 
//  			 upon the source that is passed in.
//
//  Incoming Data:
//          Parameter 1: integer source
//          Parameter 2: integer destination
//
//  Outgoing Data: N/A  
//
//  Authors: https://www.geeksforgeeks.org 
//
//  Modified: Darian      
//                                               
//  Testers: Darian, Holden, Antonio, Oberon 
//***************************************************************************

void BinaryHeap::ShortestPath(int source, int destination)
{
    bool sptSet[COLS];  // Set for if visited or not

    // Initialize all distances as INFINITE and stpSet[] as false 
    for (int i = 0; i < COLS; i++) 
    {
        heapArray[i] = INT_MAX;
        sptSet[i] = false; 
    }

    heapArray[source] = 0;  // Distance of source vertex from itself is always 0 
  
    // Find shortest path for all vertices 
    for (int count = 0; count < COLS-1; count++) 
    { 
        int u = getMinDist(heapArray, sptSet); 
   
        sptSet[u] = true;   // Mark the picked vertex as processed 
    
        for (int v = 0; v < COLS; v++)      // Update dist value of the adjacent vertices of the picked vertex. 
        {
            if (!sptSet[v] && graph[u][v] && heapArray[u] != INT_MAX && heapArray[u]+graph[u][v] < heapArray[v]) 
            {
                heapArray[v] = heapArray[u] + graph[u][v];
            }
        }       
    } 
    DisplayShortPath(destination);
}
//***************************************************************************
//  Method: getMinDist
//
//  Description:
//  This method will find the vertex with minimum distance value, from 
//  the set of vertices not yet included in shortest path 
//
//  Incoming Data:
//          Parameter 1: integer array of distances
//          Parameter 2: boolean array of values indicating if this index          
//                        is included in the shortest path
//
//  Outgoing Data:
//          Returns the index of the minimum distance 
//
//  Author: 
//  Testers: 
//***************************************************************************

int BinaryHeap::getMinDist(int hArray[], bool sptSet[]) 
{ 
   int min = INT_MAX;   //Variable to hold the minimum value
   int min_index;       // Variable to hold the index of the minimum value 
   
    for (int v = 0; v < COLS; v++)      // Checking all distances
    { 
        if (sptSet[v] == false && hArray[v] <= min)   // If statement to calculate
        {                                             // new minimum value and index
            min = hArray[v];
            min_index = v; 
        }    
    }
   return min_index; 
} 

//***************************************************************************
//  Method: DisplayShortPath
//
//  Description: This method will print the solution to our shortest 
//				 path algorithm
//
//  Incoming Data:
//          Parameter 1: integer array of distances
//          Parameter 2: The source
//
//  Outgoing Data: distance value (int), source and destination (string) 
//
//  Authors: Darian, Antonio
//
//  Testers: Darian, Holden, Antonio, Oberon         
//***************************************************************************
 
void BinaryHeap::DisplayShortPath(int x)
{ 
    string source = "Library";
    string dest = "";
    switch(x)                        // Determining x (destiantion) from 0 (library)
    {
        case 0:
            cout << "No cycles allowed" <<endl;
            cout << "Please rerun and try again" << endl; break;
        case 1:
            dest = " Intersection 1 (N Wood Ave & Hermitage Dr)"; break;
        case 2:
            dest = " Intersection 2 (N Wood Ave & E Irvine Ave)"; break;
        case 3:
            dest = " Intersection 3 (E Tuscaloosa St & N Seminary St)"; break;
        case 4:
            dest = " Intersection 4 (Hermitage Dr & N Seminary St)"; break;
        case 5:
            dest = " Intersection 5 (E Irvine Ave & N Seminary St)"; break;
        case 6:
            dest = " Intersection 6 (W Tuscaloosa St & N Court St)"; break;
        case 7:
            dest = " Intersection 7 (N Court St & Hermitage Dr)"; break;
        case 8:
            dest = " Intersection 8 (N Pine St & W Tuscaloosa St)"; break;
        case 9:
        	dest = " Coby Hall"; break;
        default:
            cout << "Invalid Option, please try again" << endl; break;
    }
	// Printing the results
    cout << "The shortest path from " << source << " to" << dest << " is " << heapArray[x] << " feet" << endl; 
    cout << "The shortest path is as follows: " << endl;
    switch(x)
    {              //switch statement for displaying the shortest route to the destination                     
        case 1:
            cout << "Library -> N Wood Ave & Hermitage Dr Intersection  " << endl; 
			system("Photo1.JPG"); 
            system("pause");
            system("taskkill /im Microsoft.Photos.exe /f");
            break;
        case 2:
            cout << "Library -> N Wood Ave & Hermitage Dr Intersection -> N Wood Ave & E Irvine Ave Intersection " << endl; 
			system("Photo2.JPG");
            system("pause");
            system("taskkill /im Microsoft.Photos.exe /f");
            break;
        case 3:
            cout << "Library -> E Tuscaloosa St & N Seminary St Intersection " << endl; 
			system("Photo3.JPG");
            system("pause");
            system("taskkill /im Microsoft.Photos.exe /f");
            break;
        case 4:
            cout << "Library -> E Tuscaloosa St & N Seminary St Intersection -> Hermitage Dr & N Seminary St Intersection " << endl; 
			system("Photo4.JPG");
            system("pause");
            system("taskkill /im Microsoft.Photos.exe /f");
            break;
        case 5:
            cout << "Library -> N Wood Ave & Hermitage Dr Intersection -> N Wood Ave & E Irvine Ave Intersection -> E Irvine Ave & N Seminary St Intersection " << endl; 
			system("Photo5.JPG"); 
            system("pause");
            system("taskkill /im Microsoft.Photos.exe /f");
            break;
        case 6:
            cout << "Library -> E Tuscaloosa St & N Seminary St Intersection -> W Tuscaloosa St & N Court St Intersection " << endl; 
			system("Photo6.JPG"); 
            system("pause");
            system("taskkill /im Microsoft.Photos.exe /f");
            break;
        case 7:
            cout << "Library -> E Tuscaloosa St & N Seminary St Intersection -> W Tuscaloosa St & N Court St Intersection -> N Court St & Hermitage Dr Intersection " << endl; 
			system("Photo7.JPG"); 
            system("pause");
            system("taskkill /im Microsoft.Photos.exe /f");
            break;
        case 8:
            cout << "Library -> E Tuscaloosa St & N Seminary St Intersection -> W Tuscaloosa St & N Court St Intersection -> N Pine St & W Tuscaloosa St Intersection " << endl;
			system("Photo8.JPG");  
            system("pause");
            system("taskkill /im Microsoft.Photos.exe /f");
            break;
        case 9:
            cout << "Library -> E Tuscaloosa St & N Seminary St Intersection -> W Tuscaloosa St & N Court St Intersection -> N Court St & Hermitage Dr Intersection -> Coby Hall" << endl; 
			system("Photo9.JPG");
            system("pause");
            system("taskkill /im Microsoft.Photos.exe /f");
            break;
        default:
            cout << "Invalid Option, please try again" << endl; break;
    }
    system("CLS");
}
//***************************************************************************
//  Method: swap
//
//  Description:
//  Method to swap two integers
//  Incoming Data:
//          Parameter 1: Pointer to integer x
//          Parameter 2: Pointer to integer y
//
//  Outgoing Data:
//          N/A  
//
//  Author:
//  Testers:       
//***************************************************************************
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
