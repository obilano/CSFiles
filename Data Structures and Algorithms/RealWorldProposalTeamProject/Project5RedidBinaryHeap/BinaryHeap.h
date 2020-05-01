/***************************************************************************/
//
//           GROUP:: Holden, Oberon, Antonio, and Darian
//           CLASS::  CS - 355
//           ASSIGNMENT::  Project #5 - Shortest Path 
//           DATE::  April 11, 2019
//           DESCRIPTION:: This program will help demonstrate the shortest 
//							path. The front end will show the back end works.
//							The back end will solve the shortest path algorithm.
/***************************************************************************/
#ifndef _BINARYHEAP_H
#define _BINARYHEAP_H

#include <iostream>
#include <fstream>
using namespace std;

//***************************************************************************
//  Constants
const int ROWS = 10;
const int COLS = 10;
//***************************************************************************
class BinaryHeap 
{ 
    int *heapArray; // pointer to array of distances in heap 
    int capacity; // maximum possible size of min heap 
    int heap_size; // Current number of elements in min heap 
    
    int graph[ROWS][COLS];
public: 
    BinaryHeap(int capacity); // Constructor 

/*Mutators*/
    void addEdge(int source, int destination, int weight);
    
/*Accessors*/
	int getMinDist(int hArray[], bool sptSet[]);
	void ShortestPath(int src, int des);
    void DisplayShortPath(int x);

}; 
void swap(int *x, int *y); 

#endif
