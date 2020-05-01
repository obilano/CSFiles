/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Palindrome Integer
 * Due Date:	June 15, 2019
 */

import java.util.Scanner;

public class PalindromeInteger {

	public static void main(String[] args){
		//User input integers
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter a positive integer: ");
		int posInt = input.nextInt();
			
		//Revese the integers and display them in reverse order
		int revInt = reverse(posInt);
		System.out.println("The number " + posInt + " in reverse order is " + revInt + ".");
		
		//determine if the integer is palindrome
		boolean flag = isPalindrome(posInt);
		if(!flag)
			System.out.print("The number " + posInt + " is not a palindrome.");
		else
			System.out.print("The number " + posInt + " is palindrome.");
		input.close(); //line 16 was giving me an error leak
	}
	
	public static int reverse(int number){
		//calculation for reversing the integers
		int revNum = 0, remainder = 0;
		while(number != 0){
			remainder = number % 10;
			number = number / 10;
			revNum = revNum * 10 + remainder;			
		}
		
		return revNum;
	}
	
	public static boolean isPalindrome(int number){
		//determine if the integers are palindrome
		boolean palindrome;
		int rev = reverse(number);
		if(number == rev)
			palindrome = true;
		else
			palindrome = false;
		
		return palindrome;
	}
}
