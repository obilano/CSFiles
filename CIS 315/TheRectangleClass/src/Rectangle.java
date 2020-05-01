/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Rectangle Class
 * Due Date:	June 21, 2019
 */

public class Rectangle {
	//data fields
	private double width = 2.0;
	private double height = 1.0;	
	
	//Constructors
	public Rectangle() {
	}
	public Rectangle(double weight, double height) {
		this.width = weight;
		this.height = height;
	}
	
	//Getters and Setters
	public double getWidth() {
		return width;
	}
	public void setWidth(double newWeight) {
		width = newWeight;
	}
	public double getHeight() {
		return height;
	}
	public void setHeight(double newHeight) {
		this.height = newHeight;
	}
	
	public double getArea() {
		return (width * height);  //* 0.5;		
	}	
	public double getPerimeter() {
		return (width + height) + width + height; 
	}

}
