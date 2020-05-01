/********************************************************************************/
//
//           GROUP:: Holden, Oberon, Antonio, and Darian
//           CLASS::  CS - 355
//           ASSIGNMENT::  Project #5 - Shotest Path 
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

AdjList::AdjList(int V) 
{ 
    this -> Vertex = V;
    adjacent = new list<iPair> [V];
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
void AdjList::addEdge(int source, int destination, int weight) 
{ 
    adjacent[source].push_back(make_pair(destination, weight)); 
    adjacent[destination].push_back(make_pair(source, weight)); 
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

void AdjList::ShortestPath(int source, int destination)
{
    // Create a priority queue to store vertices that are being preprocessed. This is weird syntax in C++. 
    // Refer below link for details of this syntax 
    // https://www.geeksforgeeks.org
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq; 
    // Create a vector for distances and initialize all distances as infinite (INF) 
    vector<int> distance(V, INF); 
    // Insert source itself in priority queue and initialize its distance as 0. 
    pq.push(make_pair(0, source)); 
    distance[source] = 0; 
    //Looping till priority queue becomes empty (or all distances are not finalized)
    while (!pq.empty()) 
    { 
        // The first vertex in pair is the minimum distance vertex, extract it from priority queue. 
        // Vertex label is stored in second of pair (it has to be done this way to keep the vertices 
        // sorted distance (distance must be first item in pair) 
        int a = pq.top().second; 
        pq.pop(); 
        // 'i' is used to get all adjacent vertices of a vertex 
        list< pair<int, int> >::iterator i; 
        for (i = adjacent[a].begin(); i != adjacent[a].end(); ++i) 
        { 
            // Get vertex label and weight of current adjacent of u. 
            int b = (*i).first; 
            int weight = (*i).second; 
            //  If there is shorted path to v through u. 
            if (distance[b] > distance[a] + weight) 
            { 
                // Updating distance of v 
                distance[b] = distance[a] + weight;
                pq.push(make_pair(distance[b], b)); 
            }  
        } 
    } 
        DisplayShortPath(destination,distance);
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
//	Modified: Oberon
//
//  Testers: Darian, Holden, Antonio, Oberon         
//***************************************************************************
 
void AdjList::DisplayShortPath(int x, vector<int>& dist) 
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
    cout << "The shortest path from " << source << " to" << dest << " is " << dist.at(x) << " feet" << endl; 
    cout << "The shortest path is as follows: " << endl;
    switch(x)
    {              //switch statement for displaying the shortest route to the destination                     
        case 1:
            cout << "Library -> Intersection 1 "; 
			system("Photo1.JPG"); break; //show picture of the path
        case 2:
            cout << "Library -> Intersection 1 -> Intersection 2"; 
			system("Photo2.JPG"); break; //show picture of the path
        case 3:
            cout << "Library -> Intersection 3"; 
			system("Photo3.JPG"); break; //show picture of the path
        case 4:
            cout << "Library -> Intersection 3 -> Intersection 4"; 
			system("Photo4.JPG"); break; //show picture of the path
        case 5:
            cout << "Library -> Intersection 1 -> Intersection 2 -> Intersection 5"; 
			system("Photo5.JPG"); break; //show picture of the path
        case 6:
            cout << "Library -> Intersection 3 -> Intersection 6"; 
			system("Photo6.JPG"); break; //show picture of the path
        case 7:
            cout << "Library -> Intersection 3 -> Intersection 6 -> Intersection 7"; 
			system("Photo7.JPG"); break; //show picture of the path
        case 8:
            cout << "Library -> Intersection 3 -> Intersection 6 -> Intersection 8";
			system("Photo8.JPG");  break; //show picture of the path
        case 9:
            cout << "Library -> Intersection 3 -> Intersection 6 -> Intersection 7 -> Coby Hall"; 
			system("Photo9.JPG"); break; //show picture of the path
        default:
            cout << "Invalid Option, please try again" << endl; break;
    }
}

