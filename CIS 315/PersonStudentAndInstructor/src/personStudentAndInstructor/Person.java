/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Person, Student, and Instructor
 * Due Date:	June 27, 2019
 */

package personStudentAndInstructor;

public class Person {
	// data fields
	private String name;
	private String birthYear;	
	
	// constructor
	public Person() {			
	}
	public Person(String n, String bY) {
		name = n;
		birthYear = bY;
	}	
	
	//getters and setters
	public String getName() {
		return name;
	}

	public void setName(String n) {
		name = n;
	}

	public String getBirthYear() {
		return birthYear;
	}

	public void setBirthYear(String bY) {
		birthYear = bY;
	}
	//toString override method
	@Override
	public String toString() {
		return "Person Name: " + name + "\nPerson Birth Year: " + birthYear + "";
	}

	

}
