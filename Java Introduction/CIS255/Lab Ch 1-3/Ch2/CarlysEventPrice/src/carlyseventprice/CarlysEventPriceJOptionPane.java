/*
Author:     Oberon Ilano
Date:       09/10/2018
Purpose:    Chapter 2 Lab - Carly's Event Price - display total guest, 
                            total price, and if event is large or not.
 */
package carlyseventprice;

import java.text.DecimalFormat;
import javax.swing.JOptionPane;
   
public class CarlysEventPriceJOptionPane 
    {
      
    public static void main(String[] args) 
        {
            final double PRICE_PER_PERSON = 35;
            final int LARGE_EVENT = 50;
            int numGuest;
            double totalPrice;
            String inputStr, currencyPattern = "$###,##0.00";
                DecimalFormat currency = new DecimalFormat(currencyPattern);
            boolean isLarge;
            JOptionPane.showMessageDialog(null, 
               "******************************************************\n"
               +"* Carly's makes the food that makes it a party.  *\n"
               + "******************************************************");
            inputStr =  JOptionPane.showInputDialog(null, 
                        "Enter number of expected guests: ");
            numGuest = Integer.parseInt(inputStr);
            if (numGuest > 0)
                totalPrice = numGuest * PRICE_PER_PERSON;
            else
                totalPrice = 0.00;
            isLarge = (numGuest >= LARGE_EVENT);
            JOptionPane.showMessageDialog(null,  "The Cost for an event with " 
                         + numGuest + " will be " + currency.format(totalPrice)
                         + "\nLarge Event: " + isLarge);
        }
    }