/*
Author:         Oberon Ilano
Date:           11/28/2018
Description:    Parallel Array Demo Ch 8
*/
package bizletterstrmanip;

import javax.swing.JOptionPane;

public class BizLetterStrManip 
{
    public static void main(String[] args) 
    {
        String name;
        String firstName = "";
        String familyName = "";
        int x;
        char c;
        
        name = JOptionPane.showInputDialog(null, 
               "Please enter customer's first and last name");
        x = 0;
        while(x < name.length())
        {
            if(name.charAt(x) == ' ')
            {
                firstName = name.substring(0, x);
                familyName = name.substring(x + 1, name.length());
                x = name.length();
            }
            x++;
        }  
        JOptionPane.showMessageDialog(null,
            "Dear " + firstName + ",\nI am so glad we are on a first name basis"
            + "\nbecause I would like the opportunity to" + 
            "\ntalk to you about an affordable insurance" +
            "\nprotection plan for the entire " + familyName + 
            "\nfamily. Call A-One Family Insurance today" + 
            "\nat 1-800-555-9287.");
    }    
}
