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
#ifndef _SORT_H
#define _SORT_H
#include <iostream>
#include <fstream> // for outfiling and infiling data
#include <ctime> //random numbers
#include <cstdlib> //randnumbers
using namespace std;

class Sort{
	int* Data;
	
	public:
		Sort();
		int InsertionSort(int* list, int size);
		int BubbleSort(int* list, int size);
		int QSort(int* list, int firstpos, int lastpos, int &c, int &s);
		int QuickSort(int* list, int firstpos, int lastpos);
		void Merge(int* list, int left, int right, int mid, int &comp, int &s);
		int MergeSort(int* list, int left, int right);
		void Swap(int& one, int& two);	
		void Display(int* list, int size);	
		void ReverseOrdered(int* list, int size);
		void RandomlyOrdered(int* list, int size);
		void OutfileRandNum(int* list, int size);
		void FillOrdered(int* list, int size);
		void FillReversed(int* list, int size);
		void FillRandomed(int* list, int size);	
		void OrderedTable(int* &list);
		void ReversedTable(int* &list);
		void RandomlyTable(int* &list);	       
};

#endif
