/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Stack of Integers Class
 * Due Date:	June 24, 2019
 */

package TheStackOfIntegersClass;

class StackOfIntegers {
	private int [] elements;
	private int size;
	
	//Constructors
	public StackOfIntegers() {
		this(16); //default capacity of 16
	}
	public StackOfIntegers(int capacity) {
		elements = new int [capacity];
	}
	
	public boolean empty() {
		boolean flag = false;
		if(size == 0)
			flag = true;
		
		return flag;
	}
	
	public int peek() {
		return elements[size - 1];
	}

	public void push(int value) {
		//resize to avoid overflow
		/*if(size >= elements.length) {			
			int [] tempElements = new int [elements.length * 2];
			System.arraycopy(elements, 0, tempElements, 0,  elements.length);
			elements = tempElements;
		}*/
		elements[size++] = value;
	}
	
	public int pop() {
		return elements[--size];
	}
	
	public int getSize() {
		return size;
	}
	
}
