/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Rectangle Class
 * Due Date:	June 21, 2019
 */

package TheRectangleClass;

class Rectangle {
	private double width = 2.0;
	private double height = 1.0;	
	
	//Constructors
	public Rectangle() {
	}
	public Rectangle(double w, double h) {
		width = w;
		height = h;
	}
	
	//Getters and Setters
	public double getWidth() {
		return width;
	}
	public void setWidth(double w) {
		width = w;
	}
	public double getHeight() {
		return height;
	}
	public void setHeight(double h) {
		height = h;
	}
	
	public double getArea() {
		return (width * height);  //* 0.5;		
	}	
	public double getPerimeter() {
		return (width + height) + width + height; 
	}

}
