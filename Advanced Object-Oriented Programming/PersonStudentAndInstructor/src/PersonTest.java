/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Person, Student, and Instructor
 * Due Date:	June 27, 2019
 */

import java.util.ArrayList;

public class PersonTest {

	public static void main(String[] args) {

		        Person p = new Person("John Doe", "1960");
		        Student s = new Student("Emily Zhang", "2007", "Finance");
		        Instructor i = new Instructor("Paul Zhang", "1970", 50000.00);

		        ArrayList<Person> person = new ArrayList<Person>();
		        person.add(p);
		        person.add(s);
		        person.add(i);
		        
		        for(Person ps : person) {
		            System.out.printf("%s\n\n", ps.toString());
		        }			
	}	
}
