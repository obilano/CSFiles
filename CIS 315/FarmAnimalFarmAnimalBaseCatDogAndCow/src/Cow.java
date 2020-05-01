/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	FarmAnimal, FarmAnimalBase, Cat, Dog, and Cow
 * Due Date:	July 4, 2019
 */

public class Cow extends FarmAnimalBase{
	
	public Cow(String n) {
		super(n);
	}

	@Override
	public String talk() {
		return "Moo! Moo!";
	}

}