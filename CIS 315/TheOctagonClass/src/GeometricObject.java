/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Octagon Class
 * Due Date:	July 5, 2019
 */

//GeometricObject.java: The abstract GeometricObject class
public abstract class GeometricObject {
	private String color = "white";
	private boolean filled;
	private java.util.Date dateCreated;

	/** Construct a default geometric object */
	protected GeometricObject() {
		dateCreated = new java.util.Date();
	}

	/** Construct a geometric object with color and filled value */
	protected GeometricObject(String color, boolean filled) {
		dateCreated = new java.util.Date();
		this.color = color;
		this.filled = filled;		
	}

	/** Return color */
	public String getColor() {
		return color;
	}

	/** Set a new color */
	public void setColor(String color) {
		this.color = color;
	}

	/**
	 * Return filled. Since filled is boolean, 
	 * the get method is named isFilled */
	public boolean isFilled() {
		return filled;
	}

	/** Set a new filled */
	public void setFilled(boolean filled) {
		this.filled = filled;
	}
	
	/** Get dateCreated */
	public java.util.Date getDateCreated() {
		return dateCreated;
	}
	
	@Override
	public String toString() {
		return "created on " + dateCreated + "\ncolor: " + color + " and filled: " + filled;
	}

	/** Abstract method getArea */
	public abstract double getArea();

	/** Abstract method getPerimeter */
	public abstract double getPerimeter();
}
