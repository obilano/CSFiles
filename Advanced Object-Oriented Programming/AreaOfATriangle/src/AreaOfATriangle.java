/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Area Of A Triangle
 * Due Date:	June 7, 2019
 */

import java.util.Scanner;

public class AreaOfATriangle {
	public static void main(String[] args){
		double x1, x2, x3, y1, y2, y3, s, side1, side2, side3, area; 
		//User enter numbers
		System.out.print("Please enter three points for a triangle: ");
		Scanner input = new Scanner(System.in);
		x1 = input.nextDouble();
		y1 = input.nextDouble();
		x2 = input.nextDouble();	
		y2 = input.nextDouble();
		x3 = input.nextDouble();
		y3 = input.nextDouble();
		//Three sides calculations
		side1 = Math.sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); 
		side2 = Math.sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
		side3 = Math.sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
		s = (side1 + side2 + side3) / 2.0;
		area =  Math.sqrt(s * (s - side1) * (s - side2) * (s - side3));		
		//display results
		System.out.println("The area of the triangle is " + String.format("%.2f", area) + ".");
		input.close(); // Somewhat line 8 was giving me an error leak
	}
}
