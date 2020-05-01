/*
Author:     Oberon Ilano
Date:       09/10/2018
Purpose:    Chapter 2 Lab - Carly's Event Price - display total guest, 
            total price, and if event is large or not.
 */
package sammysrentalprice.java;

import java.text.DecimalFormat;
import javax.swing.JOptionPane;
   
public class SammysRentalPriceJOptionPane 
    {
      
    public static void main(String[] args) 
        {
            final int FIRST_HOUR = 40;
            final int ADD_MIN = 1;
            int numMin, oneHour, remainMin, totalPrice;
            String inputStr, currencyPattern = "$###,##0.00";
                DecimalFormat currency = new DecimalFormat(currencyPattern);

            JOptionPane.showMessageDialog(null, 
               "SSSSSSSSSSSSSSSSSSSSSSSSSS\n"
               +"S Sammy's makes it fun in the sun. S\n"
               + "SSSSSSSSSSSSSSSSSSSSSSSSSS");
           
            inputStr =  JOptionPane.showInputDialog(null, 
                        "Enter the number of minutes "
                                 + "for a rented the euipment: ");
            numMin = Integer.parseInt(inputStr);
            oneHour = numMin/60;
            remainMin = numMin%60;
            totalPrice = FIRST_HOUR * oneHour + ADD_MIN * remainMin;
            JOptionPane.showMessageDialog(null, "Hour(s): " + oneHour 
                    + "\nMinute(s): " + remainMin 
                    + "\nRent Total Cost: " + currency.format(totalPrice));
        }
    }
