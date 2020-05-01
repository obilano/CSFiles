/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Hash Code for String
 * Due Date:	July 21, 2019
 */

import java.util.ArrayList;
import java.util.Set;
import java.util.HashSet;

public class HashCodeForString {
	
	
	public static void main(String[] args) {
		// Create a hash set
		Set<String> set = new HashSet<>();

		// Add strings to the set
		set.add("CIS 315");
		set.add("Java");
		set.add("Programming");
		set.add("Oberon Ilano"); // Replace "John Doe" with your own name

		ArrayList<String> myArrayList = setToList(set);

		// Display the hash code for each element in the array list
		for (String str : myArrayList) {
			System.out.println("The hash code for \"" + str + "\" = " + hashCodeForString(str));
		}
	}

	// Return a hash code for a string
	public static int hashCodeForString(String s) {
		int b = 31, hash = 0;
		for(int i = 0; i < s.length(); i++)
			hash = b * hash + s.charAt(i);
		return hash;
	}

	// Return an ArrayList from a set
	public static <E> ArrayList<E> setToList(Set<E> s) {
		ArrayList <E> list = new ArrayList <E> (s);
		return list;		
	}
}

