/************************************************************
Author(s):      Oberon Ilano, F	
Assignment:		MaxMin Analysis
Description:	Implement a program to analyze the algorithm
Due Date:		October 25, 2019
Course:			CS430
************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// FUNCTION PROTOTYPES //
void OutfileRandNum(int size, char *filename);
void OpenFile(int *list, int *randNum, char *filename);
void findLargestAndSmallest(int n, int *S, int *low, int *high);

//MAIN DRIVER //
int main(){
	char filename[20], choice;
	int randNum = 1, l, h, size;
	int list[101];

	// user's prompt for creating file or opening file
	while(choice != 'C' && choice != 'c' && choice != 'F' 
		&& choice != 'f'){

		printf("Enter C to create a file for random numbers or "
			"enter F to open a file (C/F): ");
		scanf("%s", &choice);			
	}
	
	// to create and save a file then open a file
	if (choice == 'C' || choice == 'c'){
		
		// take the size of random numbers from user	
		while(size < 1 || size > 100){
			printf("\nEnter how many random "
				"numbers to be created (1 to 100): ");
			
			while(scanf("%d",&size) != 1){
			
			// prompt if user enter non-integer
        		printf("Please enter an integer: ");
        		while(getchar() != '\n');
   			}				
			
	    }
	    
	  	// save the file name
	  	printf("\nSave the name of the file (Ex: Random.txt): ");
	  	scanf("%s", &filename);
	  	
	  	// create size n of random numbers and save to a file 
		OutfileRandNum(size, filename);
		
		// open a file
		printf("\nEnter the file name to be opened "
			"(Ex: Random.txt): \n");
		scanf("%s", filename);
		
		OpenFile(list, &randNum, filename);
	}
	
	// to open a file without creating new random numbers
	if (choice == 'F' || choice == 'f'){
		
		printf("\nEnter the file name to be opened "
			"(Ex: Random.txt): \n");
		scanf("%s", filename);
		
		// open a file to be tested
		OpenFile(list, &randNum, filename);
	}
	
	// perform MinMax function
	findLargestAndSmallest(randNum, list, &l, &h);
	
	// print result
	printf("\nMinimum: %d \tMaximum: %d\n\n", l, h);	
	
	system("Pause");
	return 0;
}

// FUNCTION DEFINITIONS //

/********************************************************
#Function Definition#
Name:			OutfileRandNum
Author(s):		Oberon Ilano
Purpose:		save random numbers into text file
Incoming:		None
Outgoing:		random numbers (int)
Return:			None
*********************************************************/
void OutfileRandNum(int size, char *filename){
	FILE *outFile = fopen(filename, "w");
	
	if(outFile == NULL){
		
		printf("File Error\n");
		exit(1);
	}
	
	srand(time(NULL)); //new random numbers

	int i = 1;
	while(i <= size){

		fprintf(outFile, "%d\n", (rand() % 999) - 99);
		i++;
    } 

    fclose(outFile);
}

/**********************************************************
#Function Definition#
Name:			OpenFile
Author(s):		Oberon Ilano
Purpose:		read data from text file 
Incoming:		random numbers (int)
Outgoing:		array of random numbers(int)
Return:			None
*************************************************************/
void OpenFile(int *list, int *randNum, char *filename){
	FILE *inFile = fopen(filename, "r+");
	
	if(inFile == NULL){

		printf("File Error\n");
		exit(1);
	}

	// read file for random numbers	
	*randNum = 1;
	while( fscanf(inFile, "%d", &list[*randNum]) == 1 || 
		*randNum == 100){
	
       	printf("%d\n", list[*randNum]);	
		*randNum = *randNum + 1;
	}

	fclose(inFile);
}

/**********************************************************
#Function Definition#
Name:			findLargestAndSmallest
Author(s):		F
Purpose:		find max and min values
Incoming:		n, S, low, and high
Outgoing:		low and high
Return:			None
***********************************************************/
void findLargestAndSmallest(int n, int* S, int *low, int *high){
	int i;
	i = 2;	
	
	*low = S[1];
	*high = S[1];
	
	while(i < n){
        
		if (S[i] < *low)
			*low = S[i];
		if (S[i] > *high)
			*high = S[i];

		i = i + 1;		
	}
}
