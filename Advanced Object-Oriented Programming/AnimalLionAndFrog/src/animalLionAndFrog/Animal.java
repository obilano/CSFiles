/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Animal, Lion, and Frog
 * Due Date:	June 28, 2019
 */

package animalLionAndFrog;

public class Animal {
	//data fields
	private String genus;
	private String species;
	private double weight;
	private boolean tail;
	
	//constructor
	public Animal(String g, String s) {
		genus = g;
		species = s;
		weight = 0.00;
		tail = false;
	}
	
	//getters and setters
	public String getGenus() {
		return genus;
	}
	public String getSpecies() {
		return species;
	}
	public double getWeight() {
		return weight;
	}
	public void setWeight(double w) {
		weight = w;
	}
	public boolean isTail() {
		return tail;
	}
	public void setTail(boolean t) {
		tail = t;
	}

}
