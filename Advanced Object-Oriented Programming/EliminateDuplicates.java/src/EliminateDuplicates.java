/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Eliminate Duplicates
 * Due Date:	June 17, 2019
 */

import java.util.*;

public class EliminateDuplicates {
	public static void main(String[] args) {
		int [] array = new int[10];
		// user input for integers
		Scanner input = new Scanner(System.in);
		System.out.print("Enter 10 integers: ");
		for(int i = 0; i < 10; i++){
			array[i] = input.nextInt();		
		}		
		int [] num = eliminateDuplicates(array);
		System.out.print("The distinct numbers are:");
		for(int j = 0; j < num.length; j++)			
			System.out.print(" " + num[j]);

		input.close();
	}
	
	public static int [] eliminateDuplicates(int [] list) {
		int [] tempArray = new int[10];
		int index = 0;
		boolean duplicate;
		for(int i = 0; i < list.length; i++) {
			duplicate = false;
			for(int j = 0; j < list.length; j++) {
				if(list[i] == tempArray[j]) 
					duplicate = true;						
			}
			if(!duplicate)
				tempArray[index++] = list[i];
		}
		int [] newArray = new int[index];
		for(int k = 0; k < index; k++)
			newArray[k] = tempArray[k];
		
		return newArray;
	}
	
}
