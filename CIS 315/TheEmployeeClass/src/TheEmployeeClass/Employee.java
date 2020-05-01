/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Employee Class
 * Due Date:	June 22, 2019
 */

package TheEmployeeClass;

class Employee {
	
	private String firstName;
	private String lastName;
	private double monthlySalary;
	
	//Constructors
	public Employee() {
	}	
	public Employee(String f, String l, double mS) {
		setFirstName(f);
		setLastName(l);
		setMonthlySalary(mS);
	}	
	
	// Mutator Methods
    public void setFirstName(String f) {
        firstName = f;
    }    
    public void setLastName(String l) {
        lastName = l;
    }
    public void setMonthlySalary(Double mS) {
    	monthlySalary = mS;
    } 
    
    // Accessor Methods
    public String getFirstName() {
        return firstName;
    }
    public String getLastName() {
        return lastName;
    }
    public double getMonthlySalary() {
    	return monthlySalary; 	
    }
    
}
