/*
Author:         Oberon Ilano
Description:    Chapter 4 - Static Field Demo
Date:           10/8/2018
 */
package staticfielddemo;

import javax.swing.JOptionPane;

public class StaticFieldDemo
{
    public static void main(String[] args) 
    {
        Student stu1 = new Student(1234, "Justin Tyme");

        JOptionPane.showMessageDialog(null, "Student #" + stu1.getCount()
                + "\nID: " + stu1.getStuNum() + "\nName: " + stu1.getName());
        
        Student stu2 = new Student(2345, "Max Volume");
        
        JOptionPane.showMessageDialog(null, "Student #" + stu2.getCount()
                + "\nID: " + stu2.getStuNum() + "\nName: " + stu2.getName());
    }
}
