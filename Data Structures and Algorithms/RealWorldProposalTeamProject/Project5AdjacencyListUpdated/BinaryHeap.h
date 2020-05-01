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
#ifndef _BINARYHEAP_H
#define _BINARYHEAP_H
#include<bits/stdc++.h> //priority queque
#include <iostream>
#include <fstream> //input files
#include <list> //make pair
#include <string>
#include <vector>

using namespace std;

//***************************************************************************
//  Constants
const int V = 10; //number of nodes
const int INF = INT_MAX; //infinite
//***************************************************************************
typedef pair<int, int> iPair; 
class AdjList 
{ 
    int Vertex;    // Number of vertices 
 
    list<pair<int, int> > *adjacent; 
public: 
    AdjList (int V); // Constructor 

/*Mutators*/
    void addEdge(int source, int destination, int weight);
    
    
/*Accessors*/
    void ShortestPath(int src, int des);
    void DisplayShortPath(int x, vector<int> &);
    
}; 
#endif
