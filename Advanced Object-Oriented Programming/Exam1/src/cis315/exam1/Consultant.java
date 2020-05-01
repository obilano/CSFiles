/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Exam 1
 * Due Date:	July 6, 2019
 */

package cis315.exam1;

public class Consultant extends Employee{
	//data field
	private double hourlyRate;
	
	//constructors
	public Consultant(int bN, String fN, String lN, Department d) {
		super(bN, fN, lN, d);
	}
	
	public Consultant(int bN, String fN, String lN, Department d, double hR) {
		super(bN, fN, lN, d);
		this.hourlyRate = hR;
	}
	
	//getter and setter
	public double getHourlyRate() {
		return hourlyRate;
	}

	public void setHourlyRate(double hourlyRate) {
		this.hourlyRate = hourlyRate;
	}

	@Override
	public String toString() {
		return super.toString() + " " + hourlyRate;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (!super.equals(obj))
			return false;
		if (getClass() != obj.getClass())
			return false;
		Consultant other = (Consultant) obj;
		if (Double.doubleToLongBits(hourlyRate) != Double.doubleToLongBits(other.hourlyRate))
			return false;
		return true;
	}
	
}
