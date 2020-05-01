/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	FarmAnimal, FarmAnimalBase, Cat, Dog, and Cow
 * Due Date:	July 3, 2019
 */

import java.util.ArrayList;

public class FarmAnimalTest {

	public static void main(String[] args) {
		//add cat, dog, and cow objects
		ArrayList<FarmAnimal> farmAnimals = new ArrayList<FarmAnimal>();
		farmAnimals.add(new Cat ("Missy"));
		farmAnimals.add(new Dog ("Lassy"));
		farmAnimals.add(new Cow ("Nossy"));
		
		//display results
		for(int i = 0; i < farmAnimals.size(); i++) 
			System.out.println(farmAnimals.get(i).getName() + ": " + farmAnimals.get(i).talk());
		}

}
