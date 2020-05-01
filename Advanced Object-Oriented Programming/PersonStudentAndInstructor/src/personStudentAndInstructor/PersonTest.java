/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Person, Student, and Instructor
 * Due Date:	June 27, 2019
 */

package personStudentAndInstructor;

public class PersonTest {

	public static void main(String[] args) {
		//object person
		Person p1 = new Person("John Doe", "1960");
		System.out.println(p1.toString() + "\n");
		
		//object student
		Student s1 = new Student("Finance");
		s1.setName("Emily Zhang");
		s1.setBirthYear("2007");
		System.out.println(s1.toString() + "\n");
		
		//instructor object
		Instructor i1 = new Instructor(50000.0);
		i1.setName("Paul Zhang");
		i1.setBirthYear("1970");

		System.out.println(i1.toString());
		
	}
	

}
