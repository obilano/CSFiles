/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Blue, Berry, and Blueberry
 * Due Date:	June 13, 2019
 */

public class Blueberry {
	public static void main(String[] args) {
		int count = 0, blue = 0, berry = 0, blueberry = 0;
		
		System.out.println("The following is from a while loop:");
		while(count < 100){
			count++;
			if(count % 3 == 0 && count % 5 == 0){
				System.out.println(String.format("%3s", count) + " Blueberry");
				blueberry++;
			}			
			else if(count % 3 == 0){
				System.out.println(String.format("%3s", count) + " Blue");	
				blue++;
			}
			else if(count % 5 == 0){
				System.out.println(String.format("%3s", count) + " Berry");		
				berry++;
			}
			else
				System.out.println(String.format("%3s", count));
		}
		System.out.println("There are " + blue + " Blues." + 
				"\nThere are " + berry + " Berries." + 
				"\nThere are " + blueberry + " Blueberries.");
		
		//reinitialize blue, berry, and blueberry for the for loop
		blue = 0;
		berry = 0;
		blueberry = 0;
		System.out.println("\nThe following is from a for loop:");
		for(count = 1; count <= 100; count++){
			if(count % 3 == 0 && count % 5 == 0){
				System.out.println(String.format("%3s", count) + " Blueberry");
				blueberry++;
			}			
			else if(count % 3 == 0){
				System.out.println(String.format("%3s", count) + " Blue");	
				blue++;
			}
			else if(count % 5 == 0){
				System.out.println(String.format("%3s", count) + " Berry");		
				berry++;
			}
			else
				System.out.println(String.format("%3s", count));				
		}
		System.out.println("There are " + blue + " Blues." + 
				"\nThere are " + berry + " Berries." + 
				"\nThere are " + blueberry + " Blueberries.");
		
		//reinitialize blue, berry, blueberry, and count for the do-while loop
		blue = 0;
		berry = 0;
		blueberry = 0;
		count = 0;
		System.out.println("\nThe following is from a do...while loop:");
		do{
			count++;
			if(count % 3 == 0 && count % 5 == 0){
				System.out.println(String.format("%3s", count) + " Blueberry");
				blueberry++;
			}			
			else if(count % 3 == 0){
				System.out.println(String.format("%3s", count) + " Blue");	
				blue++;
			}
			else if(count % 5 == 0){
				System.out.println(String.format("%3s", count) + " Berry");		
				berry++;
			}
			else
				System.out.println(String.format("%3s", count));
		}while(count < 100);
		System.out.println("There are " + blue + " Blues." + 
				"\nThere are " + berry + " Berries." + 
				"\nThere are " + blueberry + " Blueberries.");
	}

}
