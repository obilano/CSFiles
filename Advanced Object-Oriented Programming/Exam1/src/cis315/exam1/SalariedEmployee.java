/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Exam 1
 * Due Date:	July 6, 2019
 */

package cis315.exam1;

public class SalariedEmployee extends Employee{
	//data field
	private double annualSalary;
	
	//constructors
	public SalariedEmployee(int bN, String fN, String lN, Department d) {
		super(bN, fN, lN, d);
	}
	
	public SalariedEmployee(int bN, String fN, String lN, Department d, double aS) {
		super(bN, fN, lN, d);
		this.annualSalary = aS;
	}

	//getter and setter
	public double getAnnualSalary() {
		return annualSalary;
	}

	public void setAnnualSalary(double annualSalary) {
		this.annualSalary = annualSalary;
	}

	@Override
	public String toString() {
		return super.toString() + " " + annualSalary;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (!super.equals(obj))
			return false;
		if (getClass() != obj.getClass())
			return false;
		SalariedEmployee other = (SalariedEmployee) obj;
		if (Double.doubleToLongBits(annualSalary) != Double.doubleToLongBits(other.annualSalary))
			return false;
		return true;
	}

}
