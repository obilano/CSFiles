/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Process Large Dataset
 * Due Date:	July 1, 2019
 */

import java.net.URL;
import java.io.InputStreamReader;
import java.net.MalformedURLException;
import java.io.IOException;
import java.util.Scanner;
import java.text.DecimalFormat;

public class ProcessLargeDataset {
	
	public static void main(String[] args) {
		URL newURL;	
		Scanner input = new Scanner(System.in);
		String newLink = "http://liveexample.pearsoncmg.com/data/Salary.txt";
		
		try {
			newURL = new URL(newLink);
			input = new Scanner(new InputStreamReader(newURL.openStream()));
		}
		catch (MalformedURLException ex) {
			System.out.println("Invalid URL");
		}
		catch (IOException ex) {
			System.out.println("I/O Errors: no such file");			
		}
		
		int assistCount = 0, assocCount = 0, fullCount = 0;
		double fullSalary = 0, assocSalary = 0, assistSalary = 0, salary = 0.0;
		String professor = "Unknown";	
		
		while(input.hasNext()) {
			professor = input.next(); // firstName
			professor = input.next(); // lastName
			professor = input.next(); // assistant, associate, or full
			salary = input.nextDouble();
			if(professor.equals("assistant")) {
				assistSalary += salary;
				assistCount++;						
			}		
			else if(professor.equals("associate")) {
				assocSalary += salary;
				assocCount++;				
			}
			else {
				fullSalary += salary;
				fullCount++;											
			}		
	
		}		
		//display total salary
		DecimalFormat dF = new DecimalFormat("0,000.00");	
		System.out.println("Data were retrieved from " + newLink);
		System.out.println("Total salary for assistant professors is $" + dF.format(assistSalary) +
				"\nTotal salary for associate professors is $" + dF.format(assocSalary) +
				"\nTotal salary for full professors is $" + dF.format(fullSalary) +
				"\nTotal salary for all professors is $" + dF.format(assistSalary + assocSalary + fullSalary));
		
		//display average salaries
		System.out.println("\nAverage salary for  assistant professors is $" + dF.format(assistSalary / assistCount) +
				"\nAverage salary for associate professors is $" + dF.format(assocSalary / assocCount) +
				"\nAverage salary for full professors is $" + dF.format(fullSalary / fullCount) +
				"\nAverage salary for all professors is $" + dF.format((assistSalary + assocSalary + fullSalary) / (assistCount + assocCount + fullCount)));
			
	}	

}
