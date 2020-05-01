
/************************************************************
Author(s):      Oberon Ilano, F	
Assignment:		Test 3, Branch and Bound
Due Date:		October 25, 2019
Course:			CS430
************************************************************/

#include <stdio.h>
#include <stdlib.h>

//GLOBAL VARIABLES //
int totalDeadline, totalJobs = 1;
int P[100], deadline[100], completed[100]= {0};

struct job{
	int j, flag;
	float UBound, LBound;
};

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
	printf("Branch And Bound Method \n");
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
void OpenFile(char *filename){
	FILE *inFile = fopen(filename, "r+");
	//FILE *inFile2 = fopen("Random.txt", "r+");
	if(inFile == NULL){

		printf("File Error\n");
		exit(1);
	}

	// read file for random numbers	

	while( fscanf(inFile, "%d", &deadline[totalJobs]) == 1 || totalJobs == 100){
		fscanf(inFile, "%d", &P[totalJobs]);
		totalJobs = totalJobs + 1;		
		totalDeadline += deadline[totalJobs];
	}
	
	fclose(inFile);
}

/**********************************************************
#Function Definition#
Name:			CalUB
Author(s):		https://www.academia.edu/34852276/
				Title_Implementation_of_0-1_knapsack_
				problem_using_branch_and_bound_approach
Return:			float cp
*************************************************************/
float CalUB(float CurrentDL, float CurrentP, int CurrentJob){
    float cw = CurrentDL;
    float cp = CurrentP;
    int i;
    for(i = CurrentJob + 1; i <= totalJobs; i++){
            if(cw + deadline[i] <= totalDeadline){
                cw = cw + deadline[i];
                cp = cp - P[i];
            }
    }
    return cp;
}

/**********************************************************
#Function Definition#
Name:			CalLB
Author(s):		https://www.academia.edu/34852276/
				Title_Implementation_of_0-1_knapsack_
				problem_using_branch_and_bound_approach
Return:			None
*************************************************************/
float CalLB(float CurrentDL, float CurrentP, int CurrentJob){
    float cw = CurrentDL; 
	float cp = CurrentP;
    int i;
    for(i = CurrentJob + 1; i <= totalJobs; i++){
        cw = cw + deadline[i];
        if(cw < totalDeadline)
            cp = cp - P[i];
        else
            return (cp - (1 - (cw - totalDeadline) / deadline[i]) * P[i]);
    }
    return cp;
}

/**********************************************************
#Function Definition#
Name:			Sort
Author(s):		https://www.academia.edu/34852276/
				Title_Implementation_of_0-1_knapsack_
				problem_using_branch_and_bound_approach
Return:			None
*************************************************************/
void Sort(){
    int i, j, temp;
        
    for(i = 1; i <= totalJobs; i++){
        for(j = i + 1; j <= totalJobs; j++){
            if(deadline[j] < deadline[j - 1]){
                temp = P[j]; 
				P[j] = P[j-1];
                P[j-1] = temp;
                temp = deadline[j];
                deadline[j] = deadline[j - 1];
                deadline[j - 1] = temp;
            }
        }
    }
    
    for(i = 1; i <= totalJobs; i++){
        for(j = i + 1; j <= totalJobs; j++){
            if(P[j] > P[j - 1]){
                temp = P[j];
                P[j] = P[j - 1];
                P[j - 1] = temp;
                temp = P[j];
                P[j] = P[j - 1];
                P[j - 1] = temp;
                temp = deadline[j];
                deadline[j] = deadline[j - 1];
                deadline[j - 1] = temp;
            }
        }
    }
    printf("Jobs: \t\t");
    for(i = 1; i <= totalJobs; i++)
    	printf("%d\t", i);
}

/**********************************************************
#Function Definition#
Name:			BranchBound
Author(s):		https://www.academia.edu/34852276/
				Title_Implementation_of_0-1_knapsack_
				problem_using_branch_and_bound_approach
Return:			None
*************************************************************/
void BranchBound(){
    int i, next;
    float wt = 0, pr = 0;
    struct job Left_Child, Right_Child, Current;
    Current.UBound = CalUB(0, 0, 0);
    Current.LBound = CalLB(0, 0, 0);
    Current.flag = -1;
    Current.j = 0;
	i = 1;
    while(Current.j != totalJobs){
        next = Current.j + 1;
        Right_Child.UBound = CalUB(wt, pr, next);
        Right_Child.LBound = CalLB(wt, pr, next);
        Right_Child.flag = 0;
		Right_Child.j = next;
        Left_Child.flag = 1;
        Left_Child.j = next;
        if(wt + deadline[next] <= totalDeadline){
            Left_Child.UBound = CalUB(wt + deadline[next],pr - P[next],next);
            Left_Child.LBound = CalLB(wt + deadline[next],pr - P[next],next);
        }
        else{
            Current.UBound = pr;
            Left_Child.LBound = pr;
        }
        if(Left_Child.LBound <= Right_Child.LBound && Left_Child.UBound <= Right_Child.UBound)
            Current = Left_Child;
        else
            Current = Right_Child;
        completed[i] = Current.flag;
		i++;
        if(Current.flag == 1 ){
            pr = pr - P[(Current.j)];
            wt = wt + deadline[(Current.j)];
        }
    }
    printf("\nCompleted: \t");
    for(i = 1;i<= totalJobs;i++)
        printf("%d\t", completed[i]);
    	if(completed[i] == 0)
    		printf("\nPenalty : %f\n", -(Current.UBound));
	
}

// MAIN DRIVER //
int main(){
	char choice = ' ';
		menu();
	scanf("%c", &choice);	
	switch(choice){
		case '1': printf("\nNon-decreasing order items\n");
            OpenFile("Nondecreasing.txt"); break;
		case '2': printf("\nDecreasing order items\n");
        	OpenFile("Decreasing.txt");break;
		case '3': printf("\nDuplicate Items\n");
			OpenFile("Duplicate.txt"); break;
        case '4': printf("\nEven random items\n");
        	OpenFile("Even.txt");break;
        case '5':printf("\nRandom Numbers\n");
        	OpenFile("Random.txt");break;
		default:
			printf("\nInvalid Choice!\n");break;
	}
    Sort();
    BranchBound();
    return 0;
}
