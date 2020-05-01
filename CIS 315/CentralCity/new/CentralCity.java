/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Central City
 * Due Date:	June 19, 2019
 */

import java.util.*;

public class CentralCity {

	public static void main(String[] args) {	
        Scanner input = new Scanner(System.in);        
        System.out.print("Enter the number of cities: ");
        int m = input.nextInt();
        double[][] cities = new double[m][2];        
        System.out.print("Enter the coordinates of the cities: ");
        for (int i = 0; i < cities.length; i++)
        {
            for (int j = 0; j < cities[i].length; j++)
            {
                cities[i][j] = input.nextDouble();
            }
        }        
        input.close();
        
        double[] totals = new double[cities.length];
        for (int i = 0; i < totals.length; i++)
        {
            totals[i] = totalDistance(cities, i);
        }
        
        double min = totals[0];
        int index = 0;
        for (int i = 1; i < totals.length; i++)
        {
            if (min > totals[i])
            {
                min = totals[i];
                index = i;
            }
        }
        
        System.out.printf("The central city is at (%.2f, %.2f).\n", cities[index][0], cities[index][1]);
        System.out.printf("The total distance to all other cities is %.2f.\n", totals[index]);    
	}
	
	// return distance between two points c1 and c2
	public static double distance(double[] c1, double[] c2) {
		return Math.sqrt(Math.pow(c1[0] - c2[0],  2) + Math.pow(c1[1] - c2[1], 2));		
	}
	
	// return the total distance of a specific city to all other cities
    // where cities contains all cities, and i is the index for a specific city
	public static double totalDistance(double[][] cities, int i) {
		double tD = 0;
		for(int a = 0; a < cities.length; a++) {
			if(i != a)
				tD += distance(cities[i], cities[a]);			
		}
		return tD;		
	}
	
}