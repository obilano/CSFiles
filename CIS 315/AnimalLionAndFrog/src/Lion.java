/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Animal, Lion, and Frog
 * Due Date:	June 28, 2019
 */


public class Lion extends Animal {
	//data field
	private String name;
	
	//constructor
	public Lion(double w, String n) {
		 super("Panthera","Leo");
		 super.setWeight(w);
		 super.setTail(true);
		 name = n;	
	}

	//getter and setter
	public String getName() {
		return name;
	}
	public void setName(String n) {
		name = n;
	}
	
}
