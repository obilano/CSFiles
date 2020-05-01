/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Employee Class
 * Due Date:	June 22, 2019
 */

import java.text.DecimalFormat;

public class EmployeeTest{
	
	public static void main(String[] args) {
		//set e1 employee's information using constructor
		Employee e1 = new Employee("John", "Doe", 3000.0);
		Employee e2 = new Employee();

		//set e2 employee's informations using setters
		e2.setFirstName("Jane");
		e2.setLastName("Doe");
		e2.setMonthlySalary(4000.00);
		
		//calculations for monthly and yearly increase salaries
		//double e1MonthlyIncrease = e1.getMonthlySalary() * 0.10 + e1.getMonthlySalary();
		//double e1YearlyIncrease = ((e1.getMonthlySalary() * 12) * 0.10) + (e1.getMonthlySalary() * 12);
		//double e2MonthlyIncrease = e2.getMonthlySalary() * 0.10 + e2.getMonthlySalary();
		//double e2YearlyIncrease = ((e2.getMonthlySalary() * 12) * 0.10) + (e2.getMonthlySalary() * 12);
			
		e1.setMonthlySalary(e1.getMonthlySalary() * 0.10 + e1.getMonthlySalary());
		e2.setMonthlySalary(e2.getMonthlySalary() * 0.10 + e2.getMonthlySalary());
		double e1YearlyIncrease = (e1.getMonthlySalary() * 12);
		double e2YearlyIncrease = (e2.getMonthlySalary() * 12);
		
		//display both employees salary informations before the increase
		DecimalFormat dF = new DecimalFormat("0,000");
		System.out.println("Before the 10% salary increase: \n\n" + 
				e1.getFirstName() + " " + e1.getLastName() + 
				"'s monthly salary is $" + dF.format(e1.getMonthlySalary()) +
				" and his yearly salary is $" + dF.format(e1.getMonthlySalary() * 12) + ".\n" +
				e2.getFirstName() + " " + e2.getLastName() + "'s monthly salary is $" + 
				dF.format(e2.getMonthlySalary()) + " and her yearly salary is $" + 
				dF.format(e2.getMonthlySalary() * 12) + ".");
		
		//display both employees salary informations after the increase
		System.out.println("\nAfter the 10% salary increase: \n\n" + 
				e1.getFirstName() + " " + e1.getLastName() + 
				"'s monthly salary is $" + dF.format(e1.getMonthlySalary()) +
				" and his yearly salary is $" + dF.format(e1YearlyIncrease) + ".\n" +
				e2.getFirstName() + " " + e2.getLastName() + "'s monthly salary is $" + 
				dF.format(e2.getMonthlySalary()) + " and her yearly salary is $" + 
				dF.format(e2YearlyIncrease) + ".");
		
	}

}
