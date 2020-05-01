/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Person, Student, and Instructor
 * Due Date:	June 27, 2019
 */

package personStudentAndInstructor;

import java.text.DecimalFormat;

public class Instructor extends Person {
	//data field
	private double salary;
	
	//constructors
	public Instructor() {
		
	}
	public Instructor(double s) {
		salary = s;
	}
	
	//getter
	public double getSalary() {
		return salary;
	}
	//to string override method
	@Override
	public String toString() {
		DecimalFormat dF = new DecimalFormat("0,000.00");
		return super.toString() + "\nStudent Major: $" + dF.format(salary) + "";
	}
	

}
