/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	FarmAnimal, FarmAnimalBase, Cat, Dog, and Cow
 * Due Date:	July 3, 2019
 */

public class Dog extends FarmAnimalBase{
	
	public Dog(String n) {
		super(n);
	}

	@Override
	public String talk() {
		return "Arf! Arf!";
	}

}