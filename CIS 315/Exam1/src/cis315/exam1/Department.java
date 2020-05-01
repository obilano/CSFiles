/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	Exam 1
 * Due Date:	July 6, 2019
 */

package cis315.exam1;

public class Department {
	//data fields
	private String name;
	private int buildingNumber;
	
	//contructor
	public Department(String name, int buildingNumber) {
		this.name = name;
		this.buildingNumber = buildingNumber;
	}
		
	//getters and setters
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getBuildingNumber() {
		return buildingNumber;
	}

	public void setBuildingNumber(int buildingNumber) {
		this.buildingNumber = buildingNumber;
	}

	@Override
	public String toString() {
		return name + " " + buildingNumber;
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Department other = (Department) obj;
		if (buildingNumber != other.buildingNumber)
			return false;
		if (name == null) {
			if (other.name != null)
				return false;
		} else if (!name.equals(other.name))
			return false;
		return true;
	}

}
