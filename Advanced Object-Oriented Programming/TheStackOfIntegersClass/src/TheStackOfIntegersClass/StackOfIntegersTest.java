package TheStackOfIntegersClass;

/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Stack of Integers Class
 * Due Date:	June 24, 2019
 */

class StackOfIntegersTest {

	public static void main(String[] args) {
		StackOfIntegers s1 = new StackOfIntegers();
		
		//store ten integers
		s1.push(0);
		s1.push(1);
		s1.push(2);
		s1.push(3);
		s1.push(4);
		s1.push(5);
		s1.push(6);
		s1.push(7);
		s1.push(8);
		s1.push(9);
		
		//pop and display in reverse order	
		System.out.println("Pop all elements in the stack, you will get:");
		do {
			System.out.print(s1.pop() + " ");
		}while(s1.empty() == false);
			
	}

}
