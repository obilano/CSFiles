/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Person, Student, and Instructor
 * Due Date:	June 27, 2019
 */

public class Student extends Person{
	//data field
	private String major;
	
	//constructors
	public Student() {
		
	}
	public Student(String n, String bY, String m) {
		super(n, bY);
		major = m;
	}
	
	//getter
	public String getMajor() {
		return major;
	}
	
	//to string override method
	@Override
	public String toString() {
		return super.toString() + "\nStudent Major: " + major;
	}
	
	

}
