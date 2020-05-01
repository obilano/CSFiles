/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Central City
 * Due Date:	June 19, 2019
 */

import java.text.DecimalFormat;
import java.util.*;

public class CentralCity {

	public static void main(String[] args) {	
		// user input number of cities
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the number of cities: ");
		int numOfCities = input.nextInt();
		
		// user input the coordinates
		double coordinates[][]  = new double[numOfCities][2];
		System.out.print("Enter the coordinates of the cities: ");
		for(int i = 0; i < coordinates.length; i++) {
			for(int j = 0; j < coordinates[i].length; j++)
				coordinates[i][j] = input.nextDouble();
		}
		
		//calculate distances and central city by assuming distanceA is infinite
		double distanceA = Integer.MAX_VALUE, distanceB = 0;
		int shortDistance = 0;
		for(int k = 0; k < numOfCities; k++) {
			distanceB = totalDistance(coordinates, k);
			if(distanceA > distanceB) {
				distanceA = distanceB; // total distance
				shortDistance = k;
			}
		}
		
		//display the results
		DecimalFormat dF = new DecimalFormat("0.00");
		System.out.println("The central city is at (" + dF.format(coordinates[shortDistance][0])
				+ ", " + dF.format(coordinates[shortDistance][1]) + ").");
		System.out.print("The total distance form the central city to" +
				" all other cities is " + dF.format(distanceA) + ".");
		
		input.close();
	}
	
	public static double distance(double[] c1, double[] c2) {
		return Math.sqrt(Math.pow(c1[0] - c2[0],  2) + Math.pow(c1[1] - c2[1], 2));		
	}

	public static double totalDistance(double[][] cities, int i) {
		double tD = 0;
		for(int a = 0; a < cities.length; a++) {
			if(i != a)
				tD += distance(cities[i], cities[a]);			
		}
		return tD;		
	}
	
}
