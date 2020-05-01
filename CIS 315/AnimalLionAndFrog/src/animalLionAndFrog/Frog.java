/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Animal, Lion, and Frog
 * Due Date:	June 28, 2019
 */

package animalLionAndFrog;

public class Frog extends Animal {
	//data field
	private String name;
	
	//constructor
	public Frog(double w, String n) {
		super("Lithobates", "Catesbeianus");
		super.setWeight(w);
		super.setTail(false);
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
