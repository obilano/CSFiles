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
	private static Scanner input;
	private static String newLink = "http://liveexample.pearsoncmg.com/data/Salary.txt";
	private static DecimalFormat dF = new DecimalFormat("0,000.00");
	
	//open datasets from URL
	public static void openURL() {
		URL newURL;
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
	}

	//input dataset for assistant professors and calculate salaries
	public static double assistFile() {
		int assistCount = 0;
		double assistSalary = 0;
		String professor = "Unknown";
		double salary = 0.0;
		openURL(); //open dataset
		while(input.hasNext()) {
			professor = input.next();
			professor = input.next();
			professor = input.next();
			salary = input.nextDouble();
			if(professor.equals("assistant")) {
				assistSalary += salary;
				assistCount++;				
			}
			professor = "assistant";
		}
		//display assistant professor total salary
		System.out.println("Total salary for " + professor+ " professors is $" + dF.format(assistSalary));
		
		return assistSalary / assistCount;
		
	}
	
	//input dataset for associate professors and calculate salaries
	public static double assocFile() {
		int assocCount = 0;
		double assocSalary = 0;
		String professor = "Unknown";
		double salary = 0.0;
		openURL(); //open dataset
		while(input.hasNext()) {
			professor = input.next();
			professor = input.next();
			professor = input.next();
			salary = input.nextDouble();
			if(professor.equals("associate")) {
				assocSalary += salary;
				assocCount++;			
			}
			professor = "associate";
		}
		//display associate professor total salary
		System.out.println("Total salary for " + professor + " professors is $" + dF.format(assocSalary));
		
		return assocSalary / assocCount;
	}
	
	//input dataset for full professors and calculate salaries
	public static double fullFile() {
		int fullCount = 0;
		double fullSalary = 0;
		String professor = "Unknown";
		double salary = 0.0;
		openURL(); //open dataset
		while(input.hasNext()) {
			professor = input.next();
			professor = input.next();
			professor = input.next();
			salary = input.nextDouble();
			if(professor.equals("full")) {
				fullSalary += salary;
				fullCount++;				
			}
			professor = "full";	
		}		
		//display full professor total salary
		System.out.println("Total salary for " + professor + " professors is $" + dF.format(fullSalary));
		
		return fullSalary / fullCount;
	}
	
	//input dataset for all professors and calculate salaries
	public static double allFile() {
		int allCount = 0;
		double allSalary = 0;
		String professor = "Unknown";
		double salary = 0.0;
		openURL(); //open dataset
		while(input.hasNext()) {
			professor = input.next();
			professor = input.next();
			professor = input.next();
			salary = input.nextDouble();
			allSalary += salary;
			allCount++;
			professor = "all";	
		}		
		//display all professor total salary
		System.out.println("Total salary for " + professor + " professors is $" + dF.format(allSalary));
		
		return allSalary / allCount;
	}
	
	public static void main(String[] args) {
		System.out.println("Data were retrieved from " + newLink + "\n");
		
		//display average salaries
		System.out.println("\nAverage salary for  assistant professors is $" + dF.format(assistFile()) +
				"\nAverage salary for associate professors is $" + dF.format(assocFile()) +
				"\nAverage salary for full professors is $" + dF.format(fullFile()) +
				"\nAverage salary for all professors is $" + dF.format(allFile()));
				
	}		
	
}

