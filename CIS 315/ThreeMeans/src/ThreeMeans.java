/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Three Means
 * Due Date:	June 5, 2019
 */

import java.util.Scanner;

public class ThreeMeans {
	public static void main(String[] args){
		double number1, number2;
		float arithmeticMean, geometricMean, harmonicMean; 
		//User enter numbers
		System.out.print("Please enter two positive floating-point numbers: ");
		Scanner input = new Scanner(System.in);
		number1 = input.nextDouble();
		number2 = input.nextDouble();
		input.close(); // Somewhat line 14 was giving me an error leak
		//Three means calculations
		arithmeticMean = (float) ((number1 + number2) / 2.0);
		geometricMean = (float) Math.sqrt(number1 * number2);
		harmonicMean = (float) ((2.0 * number1 * number2) / (number1 + number2));
		//display results
		System.out.println("The arithmetic mean is " + String.format("%.2f", arithmeticMean) + ".");
		System.out.println("The geometric mean is " + String.format("%.2f", geometricMean) + ".");
		System.out.println("The harmonic mean is " + String.format("%.2f", harmonicMean) + ".");

	}
}
