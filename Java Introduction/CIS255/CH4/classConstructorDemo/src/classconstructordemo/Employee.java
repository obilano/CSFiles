/*
 * Author: Oberon
 * Date: 10/03/2018
 * Purpose: Chapter 4 - Class Constructor Demo
 */
package classconstructordemo;

public class Employee 
{
    private int empNum;
    private String lName;
    private String fName;
    private double salary;
    
    public Employee()
    {
        empNum = 999;
        lName = "Unknown";
        fName = "Unknow";
        salary = 0.00;                          
    }
    
    public Employee (int newEmpNum)
    {
        empNum = newEmpNum;
        lName = "Unknown";
        fName = "Unknown";
        salary = 0.00; 
    }
    
   public Employee (String newLName)
    {
        empNum = 999;
        lName = newLName;
        fName = "Unknown";
        salary = 0.00; 
    }
   
    public Employee (String newLName, String newFName)
    {
        empNum = 999;
        lName = newLName;
        fName = newFName;
        salary = 0.00; 
    }


    public Employee (int newEmpNum, String newLName, String newFName, 
            double newSalary)
    {
        empNum = newEmpNum;
        lName = newLName;
        fName = newFName;
        salary = newSalary;
    }
    
    public Employee (double newSalary)
    {
        salary = newSalary;
    }
    public int getEmpNum()
    {
        return empNum;
    }
    public String getLName()
    {
        return lName;
    }
    public String getFName()
    {
        return fName;
    }
    public double getSalary ()
    {
        return salary;
    }
    
    public void setEmpNum (int newEmpNum)
    {
        empNum = newEmpNum;
    }
    
    public void setLName (String lName)
    {
        this.lName = lName; //this. is a refer to the property name
    }
    
    public void setFName (String newFName)
    {
        fName = newFName;
    }
    
    public void setSalary(double newSalary)
    {
        salary = newSalary;
    } 
}