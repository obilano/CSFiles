/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Stack of Integers Class
 * Due Date:	June 24, 2019
 */

class StackOfIntegers {
	private int [] elements;
	private int size;
	
	//Constructors
	public StackOfIntegers() {
		this(16); //default capacity of 16
	}
	//Construct an empty stack with a specified capacity
	public StackOfIntegers(int capacity) {
		elements = new int [capacity];
	}
	
	//return true if stack is empty
	public boolean empty() {
		boolean flag = false;
		if(size == 0)
			flag = true;
		
		return flag;
	}
	//Returns the integer at the top of the stack without 
	//removing it from the stack
	public int peek() {
		return elements[size - 1];
	}
	//Stores an integer into the top of the stack
	public void push(int value) {
		elements[size++] = value;
	}
	//Remove the integer at the top of the stack and returns it.
	public int pop() {
		return elements[--size];
	}
	//Returns the number of elements in the stack.
	public int getSize() {
		return size;
	}
	
}
