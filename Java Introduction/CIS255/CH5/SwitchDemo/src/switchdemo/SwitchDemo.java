/*
Author:             Oberon Ilano
Description:        Switch Demo
Date:               October 15, 2018
 */
package switchdemo;

import javax.swing.JOptionPane;

public class SwitchDemo 
{
    public static void main(String[] args) 
    {
        final int CLOTHING_CODE = 1;
        final int FURNITURE_CODE = 2;
        final int ELECTRONICS_CODE = 3;
        final int OTHER_CODE = 4;

        final String CLOTHING_PRICER = "Regina";
        final String FURNITURE_PRICER = "Walter";
        final String ELECTRONICS_PRICER = "Lydia";
        final String OTHER_PRICER = " Marco";
        int donationType;
        String volunteer, message, inputStr;
        
        inputStr = JOptionPane.showInputDialog(null, 
                "What type of donation is this?\n" + "Enter \n" 
                + CLOTHING_CODE + " for clothing\n" 
                + FURNITURE_CODE + " for furniture\n"
                + ELECTRONICS_CODE + " for electornics\n"
                + OTHER_CODE + " for anything else: ", 
                "Sacks Fifth Avenue", JOptionPane.QUESTION_MESSAGE);
        donationType = Integer.parseInt(inputStr);
        
        switch (donationType) 
        {
            case CLOTHING_CODE:
                volunteer = CLOTHING_PRICER;
                message = "a clothing donation";
                break;
            case FURNITURE_CODE:
                volunteer = FURNITURE_PRICER;
                message = "a furniture doantion";
                break;
            case ELECTRONICS_CODE:
                volunteer = ELECTRONICS_PRICER;
                message = "a electronic donation";
                break;
            case OTHER_CODE:
                volunteer = OTHER_PRICER;
                message = "a non-clothing donation";
                break;
            default:
                volunteer = "ERROR: UNKNOWN";
                message = "ERROR: AN INVALID OPTION.";
                break;
        }
        JOptionPane.showMessageDialog(null, "You chose " + message 
                + "\nThe volunteer who will price this item is " + volunteer,
                "Sacks Fifth Avenue", JOptionPane.INFORMATION_MESSAGE);   
    }   
}

