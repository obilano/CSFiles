/***************************************************************
Author(s):      Oberon Ilano
Assignment:		Sum of Subset using Backtracking
Description:	The purpose of this program is to find all 
				the possible combinations of the integers that 
				sum to S. The expected inputs from the user 
				are S, n, and array X. The value for S is 
				inputted from the keyboard to be compared 
				to all possible combination of the integers. 
				The value for n is inputted from keyboard 
				for the size of the array X. The n integers 
				will be inputted from the keyboard to be 
				stored in the array X and to be compared for 
				all possible combinations that will sum to S.  
Due Date:		December 2, 2019
Course:			CS430
****************************************************************/

#include <stdio.h>
#define YES 1
#define NO 0

//                    GLOBAL VARIABLES                      //
/*X array holds the subsets with n size, and S represents 
 the value of target sum value. Found is an integer type 
 that holds the value of 0 if solution. 
 include array holds the value of 0 or 1, if the element 
 value is includded in the weight value */
int S = 0, found = 0, X[100], include[100];

//                   FUNCTION PROTOTYPES                   //
void SumOfSubset(int i, int weight, int total);
int promising(int i, int weight, int total);
void BubbleSort(int* list, int size);

//                       MAIN DRIVER                      //
int main(){
	printf("The purpose of this program is to find all the \n"
	"possible combination of the integers that sum to S.\n");
	
	int i, n = 0, total = 0;
	
	//take inputs S, n, and X[] from the user
	printf("\nEnter the target sum value S: ");
	scanf("%d",&S);
	
	printf("\nEnter how many integers are in the set: ");
	scanf("%d",&n);
	
	printf("\nEnter %d positive integers: ", n);
	for (i = 1; i <= n; i++){
		scanf("%d", &X[i]);
		total += X[i];
	}
	
	//sort the values in nondecreasing order 	
	BubbleSort(X, n);
	printf("\n%d integers that are given in nondecreasing order:\n", n);
	for (i = 1; i <= n; i++)
	  printf("%d \t", X[i]);
	
	//intialize include array to false/no/0  
	for (i = 1; i <= n; i++)
		include[i] = NO;
	
	//call sum of subset function
	printf("\n\nSet of solution(s) that sum to %d: ", S);
		SumOfSubset(0, 0, total);
	
	//show user if no solution found	
	if (found == 0)
		printf("NO SOLUTION FOUND!");
		
	return 0;
}

//                  FUNCTION DEFINITIONS                    //

/**********************************************************
#Function Definition#
Name:			SumOfSubset
Author(s):		Oberon Ilano
Purpose:		find all combinations that sum to S.
Incoming:		i, weight, total (integer)
Outgoing:		i, weight, total (integer) 
Return:			none
***********************************************************/
void SumOfSubset(int i, int weight, int total){
	int h;
	if(promising(i, weight, total)){
		if(weight == S){
			printf("\n{\t");
			for (h = 1; h <= i; h++)
			    if(include[h])
			     printf("%d\t", X[h]);
			printf("}");
			found = 1; //if found = 0 then there is no solution
		} 
		else{
			include[i + 1] = YES;
			SumOfSubset(i + 1, weight + X[i + 1], total - X[i + 1]);
			include[i + 1] = NO;
			SumOfSubset(i + 1, weight, total - X[i + 1]);
		}
	}
}

/**********************************************************
#Function Definition#
Name:			promising
Author(s):		Oberon Ilano
Purpose:		determine if the element value is promising
Incoming:		i, weight, total (integer)
Outgoing:		none
Return:			YES/TRUE/0 or NO/FALSE/0
***********************************************************/
int promising(int i, int weight, int total){
	if((weight + total >= S) && (weight == S || weight + X[i + 1] <= S))
		return YES;
	else
		return NO;
}

/**********************************************************
#Function Definition#
Name:			BubbleSort
Author(s):		Oberon Ilano
Purpose:		sort the values in nondecreasing order
Incoming:		list and size (integers)
Outgoing:		list (integers)
Return:			None
***********************************************************/
void BubbleSort(int* list, int size){ 
	int temp = 1, i, j;
    for (i = 1; i <= size; i++) {
      	for (j = i + 1; j <= size; j++) {
        	if (list[i] > list[j]) { 
	            temp = list[j];
	            list[j] = list[i];
	            list[i] = temp;
         }
      }      
   }		
} 
