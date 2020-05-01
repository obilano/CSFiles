package classdemo;

public class Employee 
{
    private int empNum;
    private String lName;
    private String fName;
    private double salary;
    
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
 
