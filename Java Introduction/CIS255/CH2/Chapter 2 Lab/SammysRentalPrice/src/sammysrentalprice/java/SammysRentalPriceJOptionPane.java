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
            int numMin, oneHour, remainMin, totalPrice;
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
            totalPrice = FIRST_HOUR * oneHour + remainMin;
            if (numMin <= 60)
                JOptionPane.showMessageDialog(null, "Hour(s): " + oneHour 
                    + "\nMinute(s): " + remainMin 
                    + "\nRent Total Cost: $40");
            else
            JOptionPane.showMessageDialog(null, "Hour(s): " + oneHour 
                    + "\nMinute(s): " + remainMin 
                    + "\nRent Total Cost: " + currency.format(totalPrice));
        }
    }
