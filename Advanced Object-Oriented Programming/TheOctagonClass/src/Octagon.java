/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Octagon Class
 * Due Date:	July 5, 2019
 */

public class Octagon extends GeometricObject implements Comparable, Cloneable {
	//data field
	private final double side;
	
	//constructor
	public Octagon(double s){
		super();
		side = s;
	}
	
	//getters
	public double getSide() {
		return side;
	}
	
	@Override
	public double getArea() {
		return (2 + 4 / Math.sqrt(2)) * side * side;
	}
	
	@Override
	public double getPerimeter() {
		return side * 8;
	}

	//compares an octagon object to a clone object
	@Override
	public int compareTo(Octagon o) {
		//if equal return 0
		int result = 0;
		if(getArea() > o.getArea())
			result = 1;
		if (getArea() < o.getArea())
			result = -1;
		
		return result;
	}
	
	//clone method
	@Override
	public Object clone()  {
		return new Octagon(side);
	}

}
