/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Octagon Class
 * Due Date:	July 5, 2019
 */

public class OctagonTest {
    public static void main(String[] args) {
        Octagon o1 = new Octagon(5.00);
        System.out.printf("Area of the octagon with side value %.2f is %,.2f\n", o1.getSide(), o1.getArea());
        System.out.printf("Perimeter of the octagon with side value %.2f is %,.2f\n", o1.getSide(), o1.getPerimeter());

        Octagon o2 = (Octagon) (o1.clone());
        System.out.printf("Comparison result between an octagon and its clone: %d", o1.compareTo(o2));
    }
}


