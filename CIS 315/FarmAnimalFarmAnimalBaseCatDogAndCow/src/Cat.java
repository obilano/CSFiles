/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	FarmAnimal, FarmAnimalBase, Cat, Dog, and Cow
 * Due Date:	July 3, 2019
 */

public class Cat extends FarmAnimalBase{
	
	public Cat(String n) {
		super(n);
	}

	@Override
	public String talk() {
		return "Meow! Meow!";
	}

}
