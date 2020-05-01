/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Animal, Lion, and Frog
 * Due Date:	June 28, 2019
 */

import java.util.ArrayList;

public class AnimalTest {
    public static void main(String[] args) {
        ArrayList<Animal> aList = createList();
        for (Animal a : aList) {
            System.out.println(a.getWeight() + " lbs");
        }

        for (Object o : aList) {
            if(o instanceof Lion)
            System.out.println(((Lion)o).getName());
        }
    }

    private static ArrayList<Animal> createList() {
        ArrayList<Animal> myList = new ArrayList<Animal>();
        myList.add(new Lion(530, "Leo I"));
        myList.add(new Lion(560, "Leo II"));
        myList.add(new Lion(590, "Leo III"));
        myList.add(new Frog(7, "Freddie"));

        return myList;
    }
}