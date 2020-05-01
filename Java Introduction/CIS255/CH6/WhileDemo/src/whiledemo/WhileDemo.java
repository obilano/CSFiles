/*
Author              Oberon Ilano   
Description         While Demo
Date                10/17/2018
 */
package whiledemo;

import javax.swing.JOptionPane;

public class WhileDemo 
{

    public static void main(String[] args) 
    {
        final double INT_RATE = 0.03;
        double balance;
        int response;
        String strResponse;
        int year = 1;
        
        strResponse = JOptionPane.showInputDialog(null, "Enter Initial Bank"
               + " Balance: ", JOptionPane.QUESTION_MESSAGE);
        balance = Double.parseDouble(strResponse);
        strResponse = JOptionPane.showInputDialog(null, "Do you want to see " 
                + " next year's balance? "
                + "\n1 = Yes" 
                + "\n0 == No",
                "Next Year's balance Inquiry",
               JOptionPane.QUESTION_MESSAGE);
        response = Integer.parseInt(strResponse);
        
        while(response == 1)
        {
            balance = balance + balance * INT_RATE;
            JOptionPane.showMessageDialog(null, "After year " + year
                + " at " + INT_RATE + " interest rate, balance is $" + balance);
            year = year + 1;
            strResponse=JOptionPane.showInputDialog(null, "Do you want to see " 
                + " next year's balance? "
                + "\n1 = Yes" 
                + "\n0 == No",
                "Next Year's balance Inquiry",
            JOptionPane.QUESTION_MESSAGE);
            response = Integer.parseInt(strResponse);
           
        }
    }
    
}
