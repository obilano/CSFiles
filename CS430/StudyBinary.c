/************************************************************
Author(s):      Oberon Ilano	
Assignment:		Chapter 3, number 3
Description:	Study bin (divie and conquer) and bin2 
				(dynamic programming) 			
Due Date:		October 21, 2019
Course:			CS430
************************************************************/
#include <stdio.h>
#include <time.h>

int minimum(int x, int y){
    if (x < y)
        return x;
    
    return y;
}

int bin(int n, int k){
    if (k == 0 || n == k)
        return 1;
    else
        return bin(n - 1, k - 1) + bin(n - 1, k);
}

int bin2(int n, int k){
    int B[n + 1][k + 1];
    int i, j;
    
    for(i = 0; i <= n; i++){
        for(j = 0; j <= minimum(i, k); j++){
            if (j == 0 || j == i)
                B[i][j] = 1;
            else
                B[i][j] = B[i - 1][j - 1] + B[i - 1][j];
        }
    }
    
    return B[n][k];
}

int main(){
    int n = 30, k;
    int RecBin = 0, DynamicBin = 0; // store bin's and bin2's return values
    
    clock_t start1 = 0, end1 = 0, start2 = 0, end2 = 0;
    float binTime = 0, bin2Time = 0;
            
    for(k = 1; k <= 10; k++){
	
		// record the time lapse for bin's algorithm
        start1 = clock();
        RecBin = bin(n, k);
        end1 = clock();
        
		// record the time lapse for bin2's algorithm
        start2 = clock();
        DynamicBin = bin2(n, k);
        end2 = clock();       
		
        // calculate the time lapse for bin's and bin2's algorithms by nanoseconds
        binTime = (end1 - start1) * 1000000;
        bin2Time = (end2 - start2) * 1000000;

        // print results        
        printf("Comparison with n = %d and k = %d : \nbin: %d "
            "\ttime: %.0f nanoseconds\nbin2: %d \ttime: %.0f nanoseconds\n\n",
            n, k, RecBin, binTime, DynamicBin, bin2Time);
    }

    return 0;
}
