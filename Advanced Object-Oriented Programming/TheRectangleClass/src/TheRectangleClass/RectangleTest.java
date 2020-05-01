/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Rectangle Class
 * Due Date:	June 21, 2019
 */

package TheRectangleClass;

import java.text.DecimalFormat;

class RectangleTest {

	public static void main(String[] args) {
		//set the width and height using constructor
		Rectangle r1 = new Rectangle(40.0, 4.0);
		DecimalFormat dF = new DecimalFormat("0.00");
		
		//get the area and the perimeter before the change info
		r1.getArea();
		r1.getPerimeter();
		
		//display before the change
		System.out.println("Before the change:\n\n" + "The rectangle's witdh is " +
				dF.format(r1.getWidth()) + " and its height is " + 
				dF.format(r1.getHeight()) + ".\nIts area is " + dF.format(r1.getArea()) + 
				" its perimeter is " + dF.format(r1.getPerimeter()) + ".");

		//set after the change info
		r1.setWidth(35.9);
		r1.setHeight(3.5);
		r1.getArea();
		r1.getPerimeter();
		
		//display after the change
		System.out.println("\nAfter the change:\n\n" + "The rectangle's witdh is " +
				dF.format(r1.getWidth()) + " and its height is " + 
				dF.format(r1.getHeight()) + ".\nIts area is " + dF.format(r1.getArea()) + 
				" its perimeter is " + dF.format(r1.getPerimeter()) + ".");
	}

}
