/*
Author:     Oberon Ilano
Date:       09/24/2018
Purpose:    Chapter 3 Lab - Carly's Event Price With Methods 
            - display total guest, total price, and if event is large or not.
 */
package carlyseventpricewithmethods;

import java.text.DecimalFormat;
import javax.swing.JOptionPane;
   
public class CarlysEventPriceWithMethodsJOptionPane 
    {
      
    public static void main(String[] args) 
        {
            //final double PRICE_PER_PERSON = 35;
            //final int LARGE_EVENT = 50;
            // double totalPrice;
            // String inputStr, currencyPattern = "$###,##0.00";
            //      DecimalFormat currency = new DecimalFormat(currencyPattern);
            //  boolean isLarge;
            int numGuest;
            String eventNum;
            eventNum = getEventNumber();
            numGuest = getNumOfGuests();
            printMotto();
            displayEvent(numGuest, eventNum);
             //inputStr =  JOptionPane.showInputDialog(null, 
             //            "Enter number of expected guests: ");
             // numGuest = Integer.parseInt(inputStr);
        }
    
        public static int getNumOfGuests()
        {
            String inputStr;
            inputStr =  JOptionPane.showInputDialog(null, 
                        "Enter number of expected guests: ");
            return Integer.parseInt(inputStr);
        }
        
        public static String getEventNumber()
        {
            String inputStr;
            inputStr =  JOptionPane.showInputDialog(null, 
                        "Enter event number: ");
            return String.format(inputStr);
        }
        
        public static void printMotto()
        {
            JOptionPane.showMessageDialog(null, 
               "******************************************************\n"
               +"* Carly's makes the food that makes it a party.  *\n"
               + "******************************************************");
        }
        
        public static void displayEvent(int guest, String eNum)
        {
            final int PRICE_PER_PERSON = 35;
            final int LARGE_EVENT = 50;
            int numGuest;
            double totalPrice;
            String inputStr, currencyPattern = "$###,##0.00";
                DecimalFormat currency = new DecimalFormat(currencyPattern);
            boolean isLarge;
            totalPrice = guest * PRICE_PER_PERSON;
            isLarge = (guest >= LARGE_EVENT);
            JOptionPane.showMessageDialog(null,  "The Event number is " + eNum
                    + "The Cost for an event with " 
                         + guest + " will be " + currency.format(totalPrice)
                         + "\nLarge Event: " + isLarge);
        }
        
    }
