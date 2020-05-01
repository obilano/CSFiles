/*
Author:         Oberon Ilano   
Date:           12/5/2018
Description:    Inherit Demo Ch 10
*/
package inheritdemo;
import javax.swing.*;
public class InheritDemo 
{
    public static void main(String[] args) 
    {
        Employee emp1 = new Employee();
        Costumer cust1 = new Costumer();
        String strInput;
        double balance, payRate;
        
        //Get and sotre data for employee
        strInput = JOptionPane.showInputDialog(null, 
                "Enter employee's last name");
        emp1.setLName(strInput);
        strInput = JOptionPane.showInputDialog(null, 
                "Enter employee's first name");
        emp1.setFName(strInput);
        strInput = JOptionPane.showInputDialog(null, 
                "Enter customer's pay rate ");
        payRate = Double.parseDouble(strInput);
        emp1.setPayRate(payRate);
        
        //Get and sotre data for costumer
        strInput = JOptionPane.showInputDialog(null, 
                "Enter customer's last name ");
        cust1.setLName(strInput);
        strInput = JOptionPane.showInputDialog(null, 
                "Enter customer's first name ");
        cust1.setFName(strInput);
        strInput = JOptionPane.showInputDialog(null, 
                "Enter customer's balance ");
        balance = Double.parseDouble(strInput);
        cust1.setBalance(balance);
        
        //Output employee data
        JOptionPane.showMessageDialog(null, "*** Employee Data ***\n" + 
            "Name: " + emp1.getFName() + " " + emp1.getLName() +
            "\nPayrate: " + emp1.getPayRate(), "Emplyee Data", + 
            JOptionPane.INFORMATION_MESSAGE);
        
        //Output customer data
        JOptionPane.showMessageDialog(null, "*** Customer Data ***\n" + 
            "Name: " + cust1.getFName() + " " + cust1.getLName() +
            "\nBalance: " + cust1.getBalance(), "Customer Data", + 
            JOptionPane.INFORMATION_MESSAGE);
    }    
}
