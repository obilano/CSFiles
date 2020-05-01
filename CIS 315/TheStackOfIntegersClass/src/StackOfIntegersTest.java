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
		for(int i = 0; i <= 9 ; i++)
			s1.push(i);
		
		//pop in a first in last out order	
		System.out.println("Pop all elements in the stack, you will get:");
		do {
			System.out.print(s1.pop() + " ");
		}while(s1.empty() == false);
			
	}

}
