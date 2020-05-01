/*
Author:             Oberon Ilano
Description:        If Else Demo
Date:               October 10, 2018
 */
package ifelsedemo;

import javax.swing.JOptionPane;

public class IfElseDemo 
{

    public static void main(String[] args) 
    {
        final int CLOTHING_CODE = 1;
        final int OTHER_CODE = 2;
        final String CLOTHING_PRICER = "Regina";
        final String OTHER_PRICER = " Marco";
        int donationType;
        String volunteer, message, inputStr;
        
        inputStr = JOptionPane.showInputDialog(null, 
                   "What type of donation is this?\n" + "Enter " + CLOTHING_CODE 
                   + " for clothing, " + OTHER_CODE + " for anything else: ", 
                    "Sacks Fifth Avenue", JOptionPane.QUESTION_MESSAGE);
        donationType = Integer.parseInt(inputStr);
        
        if(donationType == CLOTHING_CODE)
        {
            volunteer = CLOTHING_PRICER;
            message = "a clothing donation";
        }
        else if (donationType == OTHER_CODE)
        {
            volunteer = OTHER_PRICER;
            message = "a non-clothing donation";
        }
        
        else
        {
            volunteer = "ERROR: UNKNOWN";
            message = "ERROR: AN INVALID OPTION.";
        }
            JOptionPane.showMessageDialog(null, "You chose " + message 
                + "\nThe volunteer who will price this item is " + volunteer,
                "Sacks Fifth Avenue", JOptionPane.INFORMATION_MESSAGE);
        
    }
    
}
