/*
 * Author: Oberon
 * Date: 10/03/2018
 * Purpose: Chapter 4 - Class Constructor Demo
 */
package classconstructordemo;

import javax.swing.JOptionPane;

public class ClassConstructorDemo 
{
    public static void main(String[] args) 
    {
        Employee clerk = new Employee();
        Employee driver = new Employee();
        Employee unknown = new Employee();
        Employee stacker = new Employee(789);
        Employee accountant = new Employee(901, Counter, Bean, 75);
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
                driver.getLName() + ", " + driver.getFName()
                + "\n" + "\nUnknown Emp Num: " + unknown.getEmpNum() 
                +"\n"+"Name: "+unknown.getLName() + ", " + unknown.getFName()
                + "\n" + "\nStacker Emp Num: " + stacker.getEmpNum() 
                +"\n"+"Name: "+ stacker.getLName() + ", " + stacker.getFName());
    }
}

