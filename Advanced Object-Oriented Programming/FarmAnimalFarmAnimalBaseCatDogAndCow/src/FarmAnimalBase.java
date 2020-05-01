/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	FarmAnimal, FarmAnimalBase, Cat, Dog, and Cow
 * Due Date:	July 3, 2019
 */

public abstract class FarmAnimalBase implements FarmAnimal {
	private final String name;
	
	public FarmAnimalBase(String n) {
		name = n;
	}

	@Override
	public String getName() {
		return name;
	}
	
}
