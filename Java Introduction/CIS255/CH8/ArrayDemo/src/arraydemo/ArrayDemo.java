/*
Author:         Oberon Ilano
Date:           12/3/2018
Description:    Array Demo Ch 8
 */
package arraydemo;

import javax.swing.JOptionPane;

public class ArrayDemo 
{    
    public static void main(String[] args) 
    {
       double[] salaries = new double[4];
       String strInput, salaryTable;
       for (int i = 0; i < salaries.length; i++)
       {
            strInput = JOptionPane.showInputDialog(null, 
                "Enter salary " + (i + 1), "Salary Input",
                JOptionPane.QUESTION_MESSAGE);
            salaries[i] = Double.parseDouble(strInput);
       }
       
       salaryTable = "*** Salary Table ***\n";
       for (int i = 0; i < salaries.length; i++)
       {
           salaryTable += "Salary #" + (i+1) + ": " + salaries[i] + "\n";
       }
       JOptionPane.showMessageDialog(null, salaryTable);
    }
}
