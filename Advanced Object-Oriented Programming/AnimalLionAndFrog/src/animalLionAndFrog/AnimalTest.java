/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Animal, Lion, and Frog
 * Due Date:	June 28, 2019
 */

package animalLionAndFrog;

import java.text.DecimalFormat;

public class AnimalTest {
	
	public static Animal [] createList(){
		//Store weights and name to the animals in the list
		Animal [] ArrayList = new Animal[4];
		ArrayList[0] = new Lion(530, "Leo I");
		ArrayList[1] = new Lion(560, "Leo II");
		ArrayList[2] = new Lion(590, "Leo III");
		ArrayList[3] = new Frog(7, "Freddie");
		
		return ArrayList;
		
	}
	
	public static void main(String[] args) {
		DecimalFormat dF = new DecimalFormat("0.00");
		Animal [] animalList = createList();
		
		//display lion weights
		for(int i = 0; i < animalList.length; i++) {
			Object obj = animalList[i];
			if(obj instanceof Lion) {
				Lion l1 = (Lion)animalList[i];
				System.out.println(dF.format(l1.getWeight()) + " lbs");
			}
			
			//display frog's weight
			if(obj instanceof Frog) {
				Frog f1 = (Frog)animalList[i];
				System.out.println(dF.format(f1.getWeight()) + " lbs");
			}
		}
		
		//display Lion names
		for(int i = 0; i < animalList.length; i++) {
			Object obj = animalList[i];
			if(obj instanceof Lion) {
				Lion l1 = (Lion)animalList[i];
				System.out.println(l1.getName());
			}			
		}
		
	}

}
