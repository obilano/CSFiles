/*
Author:     Oberon Ilano
Date:       09/12/2018
Purpose:    Chapter 2 Lab - Sammy Rental Price - displays hours, minutes ,and
                            total price.
 */
package sammysrentalprice.java;

import java.text.DecimalFormat;
import javax.swing.JOptionPane;
   
public class SammysRentalPriceJOptionPane 
{
    
    public static void main(String[] args) 
        {
            final int FIRST_HOUR = 40;
            int numMin, oneHour, remainMin;
            double totalPrice;
            String inputStr, currencyPattern = "$###,##0.00";
                DecimalFormat currency = new DecimalFormat(currencyPattern);

            JOptionPane.showMessageDialog(null, 
               "SSSSSSSSSSSSSSSSSSSSSSSSSS\n"
               +"S Sammy's makes it fun in the sun. S\n"
               + "SSSSSSSSSSSSSSSSSSSSSSSSSS");
           
            inputStr =  JOptionPane.showInputDialog(null, 
                        "Enter the number of minutes "
                                 + "for a rented euipment: ");
            numMin = Integer.parseInt(inputStr);
            oneHour = numMin/60;//calculate how many hours
            remainMin = numMin%60;//calcualte remaining mins for additonal price
            if (numMin > 0 && numMin <61) //set price to $40 for the first hour
                totalPrice = 40.00;
            else if (numMin > 61)// calculate price if rented more than 1 hour
                totalPrice = FIRST_HOUR * oneHour + remainMin;
            else // set price to $0 if user input less than 1 minute
                totalPrice = 0.00; 
                JOptionPane.showMessageDialog(null, "Hour(s): " + oneHour 
                    + "\nMinute(s): " + remainMin 
                    + "\nRent Total Cost: " + currency.format(totalPrice));

        }
}
