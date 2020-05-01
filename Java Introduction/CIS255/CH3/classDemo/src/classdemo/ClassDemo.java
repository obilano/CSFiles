package classdemo;

import javax.swing.JOptionPane;

public class ClassDemo 
{

    public static void main(String[] args) 
    {
        Employee clerk = new Employee();
        Employee driver = new Employee();
        String inputStr;
        
        clerk.setEmpNum(345);
        inputStr = JOptionPane.showInputDialog(null, "Enter new clerk "
                + "last name: ");
        clerk.setLName(inputStr);
        inputStr = JOptionPane.showInputDialog(null, "Enter new clerk"
                + "first name: ");
        clerk.setFName(inputStr);
        
        driver.setEmpNum(567);
        inputStr = JOptionPane.showInputDialog(null, "Enter new driver "
                + "last name: ");
        driver.setLName(inputStr);
        inputStr = JOptionPane.showInputDialog(null, "Enter new driver "
                + "first name: ");
        driver.setFName(inputStr);
        
        JOptionPane.showMessageDialog(null, "***New Employees***\n"
                + "Clerk Emp Num: " + clerk.getEmpNum() + "\n" + "Name: " + 
                clerk.getLName() + ", " + clerk.getFName() + "\n" + "\n" +
                "Driver Emp Num: " + driver.getEmpNum() + "\n" + "Name: " + 
                driver.getLName() + ", " + driver.getFName());
        
    }
    
}
