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
#include "Sort.h" //include Sort header for function declarations
//*******************************************************************

///////////////CLASS DEFINITION/IMPLEMENTATION//////////////////

//*********************************************************************
//Constructors: iniatilized dynamic array to 0
Sort::Sort(){
	int* array = new int[100];
	for(int i = 0; i < 100; i++)
		array[i] = 0;
}

/********************************************************
#Function Definition#
Name:			Swap
Author(s):		Oberon Ilano (from CS 155 class)
Purpose:		to swap two elements/items
Incoming:		array of numbers(int)
Outgoing:		array of numbers(int)
Return:			None
*********************************************************/
void Sort::Swap(int& one, int& two){ 
    int temp = one; 
    one = two; 
    two = temp; 
} 

/********************************************************
#Function Definition#
Name:			InsertionSort
Author(s):		Oberon Ilano (from CS 155 class)
Purpose:		Sort items in ascending order
Incoming:		array of numbers(int)
Outgoing:		array of numbers(int)
Return:			comparison & swap counts (int)
*********************************************************/
int Sort::InsertionSort(int* list, int size){   
	int temp = 0, min = 0, compares = 0, swaps = 0;  
	for(int i = 0; i < size; i++){
    	for(int j = i; j > 0; j--){	
		compares++;	//count number of comparison
            if(list[j] < list[j - 1]){ 
				temp = list[j - 1]; 
      			list[j - 1] = list[j];
      			list[j] = temp;				
			swaps++; // count number if swaps
			}			
		}
	}
	return compares + swaps;
} 

/********************************************************
#Function Definition#
Author(s):		Oberon Ilano (from CS 155 class)
Name:			BubbleSort
Purpose:		Sort items in ascending order
Incoming:		array of numbers(int)
Outgoing:		array of numbers(int)
Return:			comparison & swap counts (int)
*********************************************************/
int Sort::BubbleSort(int* list, int size){ 
	int temp = 0, compares = 0, swaps = 0;
	for(int a = 0; a < size - 1; a++){
	    for(int b = 0; b < size - a - 1; b++){   
			compares++;  	//count number of comparison		     	    	
	        if(list[b] > list[b + 1]){
				swaps++;	//count number of comparison		        	
	            temp = list[b];								
	            list[b] = list[b + 1];
	            list[b + 1] = temp;	    					      
	        }		 	    	
	    }
	}		
	return compares + swaps;
} 

/********************************************************
#Function Definition#
Name:			QSort
Author(s):		Dr. Janet Jenkins
Modified by:	Oberon Ilano
Purpose:		to get the last item as pivot, then 
				replace it to correspoding position in a 
				sorted array, and replace the smaller 
				items to the left of pivot and the greater 
				items to right of pivot 
Incoming:		array of numbers(int) and comparison & 
				swap counts (int)
Outgoing:		of numbers(int) and comparison & swap 
				counts (int)
Return:			right (int)
*********************************************************/
int Sort::QSort(int* list, int firstpos, int lastpos, int &c, int &s){
    int pivot = list[firstpos];   
    int left = (firstpos + 1);
	int right = lastpos;
	int temp = 0;  
	bool flag = false; 
	while(!flag){
		while(left <= right && list[left] <= pivot){
			left++;
			c++; //count number of comparison
		}
		while(list[right] >= pivot && right >= left){
			right--;
			c++; //count number of comparison
		}
		if(right < left){
			flag = true;
		}
		else{
			temp = list[left];
			list[left] = list[right];
			list[right] = temp;
			s++; //count number of swaps
		}
	}
	temp = list[firstpos];
	list[firstpos] = list[right];
	list[right] = temp; 
	s++; //count number of swaps
	
	return right;
} 

/********************************************************
#Function Definition#
Name:			QuickSort
Author(s):		Dr. Janet Jenkins
Modified by:	Oberon Ilano
Purpose:		Sort an array recursively
Incoming:		array of numbers(int)
Outgoing:		array of numbers(int)
Return:			count + the number of times that recursive
				is being used (int)
*********************************************************/ 
int Sort::QuickSort(int* list, int firstpos, int lastpos){
	int Partition = 0, c = 0, s = 0, q1 = 0, q2 = 0; 
	if (firstpos < lastpos) { 			
        //partitioning index, list[i] is now at right place 
        Partition = QSort(list, firstpos, lastpos, c, s); 
        // this separately sort elements before partition and after partition   
		q1 = QuickSort(list, firstpos, Partition - 1);     
		q2 = QuickSort(list, Partition + 1, lastpos);
    } 
    return c + s + q1 + q2; 
} 

/********************************************************
#Function Definition#
Name:			Merge
Author(s):		Dr. Janet Jenkins
Modified by:	Oberon Ilano
Purpose:		merge two arrays into one sorted array 
Incoming:		array of numbers(int) and comparison & 
				swap counts (int)
Outgoing:		array of numbers(int) and comparison & 
				swap counts (int)
Return:			None
*********************************************************/
void Sort::Merge(int* list, int left, int right, int mid, int &comp, int &s){
	int* TempArray = new int[right - left + 1];
	int a = left, b = mid + 1, c = 0; 
	while (a <= mid && b <= right){		
		if (list[a] < list[b]){
			TempArray[c++] = list[a++];	
		}
		else{
			TempArray[c++] = list[b++];
		}
		comp++; //count number of comparison
		s++; //count number of swaps
	} 
	while (a <= mid){
		TempArray[c++] = list[a++];
		s++; //count number of swaps
	} 
	while (b <= right){
		TempArray[c++] = list[b++];
		comp++; //count number of comparison
		s++; //count number of swaps
	} 	
	for (int x = left; x <= right; x++){	
		list[x] = TempArray[x - left];
		s++; //count number of swaps
	}
		
	delete [] TempArray;
}

 /**********************************************************
#Function Definition#
Name:			MergeSort
Author(s):		Dr. Janet Jenkins
Modified by:	Oberon Ilano
Purpose:		to seperate array into two parts merge 
				two arrays into one sorted array recursively
Incoming:		array of numbers(int)
Outgoing:		array of numbers(int)
Return:			comparison & swap counts (int)
*************************************************************/
int Sort::MergeSort(int* list, int left, int right){
	int c = 0, s = 0;
	if (left < right){
		int mid = ((left + right) / 2); 	
		MergeSort(list, left, mid);
		MergeSort(list, mid + 1, right); 
		Merge(list, left, right, mid, c, s);
	}
	return c + s; // return numbers of operations/comparison and swaps
}

 /**********************************************************
#Function Definition#
Name:			ReverseOrdered
Author(s):		Oberon Ilano
Purpose:		sort the array/items to descending order
Incoming:		array of items(int)
Outgoing:		array of items(int)
Return:			None
*************************************************************/
void Sort::ReverseOrdered(int* list, int size){ 
	int temp = 0;
    for(int a = 0; a < size; a++){
        for(int b = a; b < size; b++){
            if(list[a] < list[b]){
               Swap(list[a], list[b]);
            }
        }
    }
} 

/************************************************************
#Function Definition#
Name:			RandomlyOrdered
Author(s):		Oberon Ilano
Purpose:		sort array/items in a random order nad helper
				for FillRandomly function
Incoming:		array of items(int)
Outgoing:		array of items(int)
Return:			None
**************************************************************/
void Sort::RandomlyOrdered(int* list, int size){
	srand(time(0));
	for(int i = size -1; i > 0; i--){// Pick a random index from 0 to i
		int j = rand() % (i + i);
		Swap(list[i], list[j]);
	}
}

/**********************************************************
#Function Definition#
Name:			OutfileRandNum
Author(s):		Oberon Ilano
Purpose:		save random numbers into text file
Incoming:		None
Outgoing:		random numbers (int)
Return:			None
*************************************************************/
void Sort::OutfileRandNum(int* list, int size){
	ofstream saveMe("Random.txt"); // open file
	srand(time(NULL)); 
	int randomInt = 0;
	for(int i=0; i < size; i++){
        randomInt = (rand() % 999) - 9; //set random numbers
        saveMe << randomInt << "\t"; //save to text file
    }
    saveMe.close();
}

/**********************************************************
#Function Definition#
Name:			FillOrdered
Author(s):		Oberon Ilano
Purpose:		read data from text file and input it in a
				ascending ordered
Incoming:		numbers (int)
Outgoing:		array of numbers(int)
Return:			None
*************************************************************/
void Sort::FillOrdered(int* list, int size){
	Sort F;
	F.OutfileRandNum(list, size); //save random numbers to file
	ifstream openMe("Random.txt"); //open the random numbers
	if (openMe.fail())
	   	{
	       	cout << "FILE NOT FOUND!" << endl;
	       	int main();
	    }
	int index = 0, temp = 0;
	while(openMe >> list[index]){ //input data file in ascending order
		index++; 
		for(int a = 0; a < index - 1; a++){
		    for(int b = 1; b < index; b++){
		        if(list[b] < list[b - 1]){
		            Swap(list[b], list[b-1]);          
		        }	    	
	    	}	    
   		}
	}
	openMe.close();//close file
}

/**********************************************************
#Function Definition#
Name:			FillReversed
Author(s):		Oberon Ilano
Purpose:		read data from text file and input it in a
				descending ordered
Incoming:		numbers (int)
Outgoing:		array of numbers(int)		
Return:			None
*************************************************************/
void Sort::FillReversed(int* list, int size){
	Sort F;
	F.OutfileRandNum(list, size);	//save random numbers to file
	ifstream openMe("Random.txt");  //open the random numbers
	if (openMe.fail())
	   	{
	       	cout << "FILE NOT FOUND!" << endl;
	       	int main();
	    }
	int index = 0;
	while(openMe >> list[index]){ //input data file in descending order
		index++;
		F.ReverseOrdered(list, index);
	}
	openMe.close();//close file	
}

/**********************************************************
#Function Definition#
Name:			FillRandomed
Author(s):		Oberon Ilano
Purpose:		read data from text file and input it in a
				randomly ordered
Incoming:		numbers (int)
Outgoing:		array of numbers(int)		
Return:			None
*************************************************************/
void Sort::FillRandomed(int* list, int size){
	Sort F;
	F.OutfileRandNum(list, size); //save random numbers to text file
	ifstream openMe("Random.txt"); 
	if (openMe.fail())
	   	{
	       	cout << "FILE NOT FOUND!" << endl;
	       	int main();
	    }
	int index = 0;
	while(openMe >> list[index]){ //input random numbers
		index++;
	}
	openMe.close();//close file
}

/**********************************************************
#Function Definition#
Name:			Display
Author(s):		Oberon Ilano
Purpose:		to print and show array
Incoming:		array of numbers (int)
Outgoing:		array of numbers (int)
Return:			None
*************************************************************/
void Sort::Display(int* list, int size){ 
    for (int i=0; i < size; i++) 
        cout << list[i] << "\t";
} 

/**********************************************************
#Function Definition#
Name:			OrderedTable
Author(s):		Oberon Ilano
Purpose:		cout and show the number of the 
				instructions/comparisons in the function of 
				the sorting routines when the array is in 
				ordered 
Incoming:		array of numbers(int)
Outgoing:		array of numbers(int)
Return:			None
*************************************************************/
void Sort::OrderedTable(int* &list){	
	Sort F;
	int size = 10000, count = 0, M = 0; //initialize size to test 10000 items
	int* array = new int[size];
	for(int i = 0; i < size; i++)
		array[i] = 0;
	F.FillOrdered(array, size);
	int SSTT = F.InsertionSort(array, size);
	int BSTT = F.BubbleSort(array, size);
	int QSTT = F.QuickSort(array, 0, size - 1);
	int MSTT = F.MergeSort(array, 0, size - 1);
	size = 1000; //test 1000 items
	int SST = F.InsertionSort(array, size);
	int BST = F.BubbleSort(array, size);
	int QST = F.QuickSort(array, 0, size - 1);
	int MST = F.MergeSort(array, 0, size - 1);
	size = 100; //test 100 items
	int SSH = F.InsertionSort(array, size);
	int BSH = F.BubbleSort(array, size);
	int QSH = F.QuickSort(array, 0, size - 1);
	int MSH = F.MergeSort(array, 0, size - 1);
	size = 10; //10 items
	int SS = F.InsertionSort(array, size);
	int BS = F.BubbleSort(array, size);
	int QS = F.QuickSort(array, 0, size-1);
	int MS = F.MergeSort(array, 0, size - 1);
	//creating table
	cout << "\t\t\t In Ordered Operations (Comparisons & Swaps)" << endl
		 << "\n\tRoutines   \\N#" << "\t|" << "10" << "\t\t" << "100" << "\t\t" << "1000" << "\t\t" << "10000" <<  endl
		 << "\t____________\\___|" << endl
		 << "\tInsertion" << "\t|" << SS << "\t\t" << SSH << "\t\t" << SST << "\t\t" << SSTT <<  endl
		 << "\tBubble   " << "\t|" << BS << "\t\t" << BSH << "\t\t" << BST << "\t\t" << BSTT <<  endl
		 << "\tQuick    " << "\t|" << QS << "\t\t" << QSH << "\t\t" << QST << "\t\t" << QSTT <<  endl
		 << "\tMerge    " << "\t|" << MS << "\t\t" << MSH << "\t\t" << MST << "\t\t" << MSTT <<  endl;
 	 
	delete [] array;
	array = NULL;
	return;		
}

/**********************************************************
#Function Definition#
Name:			ReversedTable
Author(s):		Oberon Ilano
Purpose:		cout and show the number of the 
				instructions/comparisons in the function of 
				the sorting routines when the array is in 
				reverse ordered 
Incoming:		array of numbers(int)
Outgoing:		array of numbers(int)
Return:			None
*************************************************************/
void Sort::ReversedTable(int* &list){
	Sort F;
	int size = 10000, count = 0, M = 0;	//initialize size to test 10000 items
	int* array = new int[size];
	for(int i = 0; i < size; i++)
		array[i] = 0;	
	F.FillReversed(array, size);
	int SSTT = F.InsertionSort(array, size);
	int BSTT = F.BubbleSort(array, size);
	int QSTT = F.QuickSort(array, 0, size - 1);
	int MSTT = F.MergeSort(array, 0, size - 1);
	size = 1000; //test 1000 items
	int SST = F.InsertionSort(array, size);
	int BST = F.BubbleSort(array, size);
	int QST = F.QuickSort(array, 0, size - 1);
	int MST = F.MergeSort(array, 0, size - 1);
	size = 100; //test 100 items
	int SSH = F.InsertionSort(array, size);
	int BSH = F.BubbleSort(array, size);
	int QSH = F.QuickSort(array, 0, size - 1);
	int MSH = F.MergeSort(array, 0, size - 1);
	size = 10; //test 10 items
	int SS = F.InsertionSort(array, size);
	int BS = F.BubbleSort(array, size);
	int QS = F.QuickSort(array, 0, size-1);
	int MS = F.MergeSort(array, 0, size - 1);
	//creating table
	cout << "\t\t\t Reverse Ordered Operations (Comparisons & Swaps)" << endl
	     << "\n\tRoutines   \\N#" << "\t|" << "10" << "\t\t" << "100" << "\t\t" << "1000" << "\t\t" << "10000" <<  endl
		 << "\t____________\\___|" << endl
		 << "\tInsertion" << "\t|" << SS << "\t\t" << SSH << "\t\t" << SST << "\t\t" << SSTT <<  endl
		 << "\tBubble   " << "\t|" << BS << "\t\t" << BSH << "\t\t" << BST << "\t\t" << BSTT <<  endl
		 << "\tQuick    " << "\t|" << QS << "\t\t" << QSH << "\t\t" << QST << "\t\t" << QSTT <<  endl
		 << "\tMerge    " << "\t|" << MS << "\t\t" << MSH << "\t\t" << MST << "\t\t" << MSTT <<  endl;
		 
	delete [] array;
	array = NULL;
	return;	
}

/**********************************************************
#Function Definition#
Name:			RandomlyTable
Author(s):		Oberon Ilano
Purpose:		cout and show the number of the 
				instructions/comparisons in the function of 
				the sorting routines when the array is in 
				random ordered 
Incoming:		array of numbers(int)
Outgoing:		array of numbers(int)	
Return:			None
*************************************************************/
void Sort::RandomlyTable(int* &list){
	Sort F;
	int size = 10000, count = 0, M = 0; //initialize size to test 10000 items
	int* array = new int[size];
	for(int i = 0; i < size; i++)
		array[i] = 0;
	F.FillRandomed(array, size);
	int SSTT = F.InsertionSort(array, size);
	int BSTT = F.BubbleSort(array, size);
	int QSTT = F.QuickSort(array, 0, size - 1);
	int MSTT = F.MergeSort(array, 0, size - 1);
	size = 1000; //test 1000 items
	int SST = F.InsertionSort(array, size);
	int BST = F.BubbleSort(array, size);
	int QST = F.QuickSort(array, 0, size - 1);
	int MST = F.MergeSort(array, 0, size - 1);
	size = 100; //test 100 items
	int SSH = F.InsertionSort(array, size);
	int BSH = F.BubbleSort(array, size);
	int QSH = F.QuickSort(array, 0, size - 1);
	int MSH = F.MergeSort(array, 0, size - 1);
	size = 10; //test 10 items
	int SS = F.InsertionSort(array, size);
	int BS = F.BubbleSort(array, size);
	int QS = F.QuickSort(array, 0, size-1);
	int MS = F.MergeSort(array, 0, size - 1);
	//creating table
	cout << "\t\t\t Random Ordered Operations (Comparisons & Swaps)" << endl
		 << "\n\tRoutines   \\N#" << "\t|" << "10" << "\t\t" << "100" << "\t\t" << "1000" << "\t\t" << "10000" <<  endl
		 << "\t____________\\___|" << endl
		 << "\tInsertion" << "\t|" << SS << "\t\t" << SSH << "\t\t" << SST << "\t\t" << SSTT <<  endl
		 << "\tBubble   " << "\t|" << BS << "\t\t" << BSH << "\t\t" << BST << "\t\t" << BSTT <<  endl
		 << "\tQuick    " << "\t|" << QS << "\t\t" << QSH << "\t\t" << QST << "\t\t" << QSTT <<  endl
		 << "\tMerge    " << "\t|" << MS << "\t\t" << MSH << "\t\t" << MST << "\t\t" << MSTT <<  endl;
		 
	delete [] array;
	array = NULL;
	return;	
}
