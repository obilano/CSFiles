/*
Author:         Oberon Ilano   
Date:           12/5/2018
Description:    Inherit Demo, Employee Class, Ch 10
*/
package inheritdemo;

public class Employee extends Person
{
    private double payRate;
    
    public void setPayRate(double newPayRate)
    {
        payRate = newPayRate;
    }
    public double getPayRate()
    {
        return payRate;
    }
}
