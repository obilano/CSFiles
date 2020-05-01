/************************************************************
Author(s):      Oberon Ilano, F	
Assignment:		Test 3, Greedy Method
Due Date:		October 25, 2019
Course:			CS430
************************************************************/
#include<stdio.h>
#include <stdlib.h>

void menu();
void OpenFile(int *list, int *size, char *filename);
void BubbleSort(int* list, int size);
float greedyMethod(int* amount, int n);

int main(){
    int a[101];
    int count, i, j;
    char choice = ' ';
 	float ratio;
 	menu();
	scanf("%c", &choice);	
	switch(choice){
		case '1': printf("\nNon-decreasing order items\n");
            OpenFile(a, &count, "Nondecreasing.txt"); break;
		case '2': printf("\nDecreasing order items\n");
        	OpenFile(a, &count, "Decreasing.txt");break;
		case '3': printf("\nDuplicate Items\n");
			OpenFile(a, &count, "Duplicate.txt"); break;
        case '4': printf("\nEven random items\n");
        	OpenFile(a, &count, "Even.txt");break;
        case '5':printf("\nRandom Numbers\n");
        	OpenFile(a, &count, "Random.txt");break;
		default:
			printf("\nInvalid Choice!\n");break;
	}
 	BubbleSort(a, count);
    ratio = greedyMethod(a, count);
    printf("\n\nRatio: %f", ratio);
	
    return(0);

}


/********************************************************
#Function Definition#
Name:			menu
Author(s):		Oberon Ilano
Purpose:		Use to select option from the keyboard
Incoming:		None
Outgoing:		main menu option (char)
Return:			None
*********************************************************/
void menu(){
	//option selection
	printf("Greedy Method \n");
	printf("1. Nondecreasing order items\n");
	printf("2. Decreasing order items\n");
	printf("3. Duplicate items\n");
	printf("4. Even random numbers\n"); 
	printf("5. Random numbers\n"); 
	printf("\nEnter a valid choice: ");
}

/**********************************************************
#Function Definition#
Name:			OpenFile
Author(s):		Oberon Ilano
Incoming:		numbers (int), char filename
Outgoing:		array of random numbers(int)
Return:			None
*************************************************************/
void OpenFile(int *list, int *size, char *filename){
	FILE *inFile = fopen(filename, "r+");
	
	if(inFile == NULL){

		printf("File Error\n");
		exit(1);
	}

	// read file for random numbers	
	*size = 1;
	while( fscanf(inFile, "%d", &list[*size]) == 1 || 
		*size == 100){
		*size = *size + 1;
	}

	fclose(inFile);
}

/********************************************************
#Function Definition#
Author(s):		Oberon Ilano (from CS 155 class)
Name:			BubbleSort
Incoming:		array of numbers(int)
Outgoing:		array of numbers(int)
Return:			none
*********************************************************/
void BubbleSort(int* list, int size){ 
	int temp = 1, i, j;
    for (i = 0; i < size; i++) {
      	for (j = i + 1; j < size; j++) {
        	if (list[i] < list[j]) { 
	            temp = list[j];
	            list[j] = list[i];
	            list[i] = temp;

         }
      }
      
   }		
} 

/********************************************************
#Function Definition#
Author(s):		Oberon Ilano 
Name:			Greedy Method
Incoming:		array of numbers(int)
Outgoing:		array of numbers(int)
Return:			ratio, float type
*********************************************************/
float greedyMethod(int* amount, int n){
    int S[101], length; 
    int i, j, cap;
    float tA;
    
      
	printf("\nEnter the length capacity: ");
    	scanf("%d", &length);
    cap = length;	
	
	for (i = 1; i < n; i++)
      S[i] = 0;
	
    for (i = 1; i < n; i++) {    	
        if (amount[i] > cap){
        	S[i] = 0;
       	}
        else {
	        S[i] = 1;	        
	        cap = cap - amount[i];
	        tA = tA + amount[i];
       }
    }
    
    if (i < n){
        S[i] = cap / amount[i];
        if (S[i] != 1)
      		S[i] = 0;
	}
    printf("\nPrograms \tAmount\n");
    printf("***********\t********\n");
    for (i = 1; i < n; i++)
    	printf("\n%d \t\t %d", S[i], amount[i]);
 
 	return tA / length;
}
