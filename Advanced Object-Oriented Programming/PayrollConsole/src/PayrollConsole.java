/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Payroll Console
 * Due Date:	June 11, 2019
 */

import java.util.Scanner;
import java.text.DecimalFormat;

public class PayrollConsole {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		DecimalFormat dF = new DecimalFormat("0.00");
		String name = null;
		double hours, payRate, fedTax, stateTax, grossPay, fedW,
				stateW, totalDeduction, netPay;
		
		//User enter informations
		System.out.print("Enter employee's name: ");
		name = input.nextLine();	
		System.out.print("Enter number of hours worked in a week: ");
		hours = input.nextDouble();
		System.out.print("Enter hourly pay rate: ");
		payRate = input.nextDouble();
		System.out.print("Enter federal tax witholding rate: ");
		fedTax = input.nextDouble();
		System.out.print("Enter state tax witholding rate: ");
		stateTax = input.nextDouble();
		
		//Calculations
		grossPay = payRate * hours;
		fedW = fedTax * grossPay;
		stateW = stateTax * grossPay;
		totalDeduction = (fedTax + stateTax) * grossPay;
		netPay = (1 - fedTax - stateTax) * grossPay;
		
		//display result
		System.out.println("\nEmployee Name: " + name +"\nHours Worked: " + 
				dF.format(hours) + "\nPay Rate: $" + dF.format(payRate) + 
				"\nGross Pay: $" + dF.format(grossPay) + "\nDeductions: " + 
				"\n  Federal Witholding(" + dF.format(fedTax * 100) + "%): $" + 
				dF.format(fedW) + "\n  State Witholding(" + 
				dF.format(stateTax * 100) + "%): $" + dF.format(stateW) + 
				"\n  Total Deduction: $" + dF.format(totalDeduction) + 
				"\nNet Pay: $" + dF.format(netPay));
		
		input.close(); //line 14 was giving me an error leak
	}

}
