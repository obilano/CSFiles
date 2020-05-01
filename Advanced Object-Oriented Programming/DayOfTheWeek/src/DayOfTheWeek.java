
/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Day of the week
 * Due Date:	June 9, 2019
 */

import java.util.Scanner;
public class DayOfTheWeek{
	public static void main(String[] args){
		int h = 0, q = 0, m = 0, j = 0, k = 0, year = 0; 		
		String Day = null;
		Scanner input = new Scanner(System.in);
		//User enter numbers
		System.out.print("Enter the year (e.g., 2014): ");
		year = input.nextInt();
		System.out.print("Enter the month (i.e., 1-12): ");
		m = input.nextInt();
		System.out.print("Enter the day of the month (i.e., 1-12): ");
		q = input.nextInt();
		//Zeller's calculations
		if (m == 1 ) {			
			year--;
			m = 13;
		}
		if (m == 2) {
			year--;
			m = 14;
		}
		j = year / 100;
		k = year % 100;
		h = (q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
		if (h == 0)
			Day = "Saturday";
		else if (h == 1)
			Day = "Sunday";
		else if (h == 2)
			Day = "Monday";
		else if (h == 3)
			Day = "Tuesday";
		else if (h == 4)
			Day = "Wednesday";
		else if (h == 5)
			Day = "Thursday";
		else
			Day = "Friday";		
		//display results
		System.out.println("Day of the week is " + Day + ".");
		input.close(); // Somewhat line 14 was giving me an error leak
	}

}
