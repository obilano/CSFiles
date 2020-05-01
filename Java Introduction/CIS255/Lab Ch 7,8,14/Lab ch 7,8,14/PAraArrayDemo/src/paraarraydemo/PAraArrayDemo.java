/*
Author:         Oberon Ilano
Date:           12/3/2018
Description:    Parallel Array Demo Ch 8
*/
package paraarraydemo;
import javax.swing.*;
public class PAraArrayDemo 
{
    public static void main(String[] args) 
    {
        final int NUM_OF_ITEMS = 10;
        int[] itemNum = {101, 108, 201, 213, 266, 304, 311, 409, 411, 412};
        double[] price = {0.29, 1.23, 3.50, 0.69, 6.79, 3.19, 0.99, 0.89,
                          1.26, 8.00};
        String  strItem;
        String strChoice = "Y";
        int itemSearched;
        double itemPrice = 0.0;
        boolean validItem = false;
        
        while(!strChoice.equals("N"))
        {
            strItem = JOptionPane.showInputDialog(null, 
                "Enter the item number:", "Price Search", 
                JOptionPane.QUESTION_MESSAGE);
            itemSearched = Integer.parseInt(strItem);
            for(int x = 0; x < NUM_OF_ITEMS; x++)
            {
                if(itemSearched == itemNum[x])
                {
                    validItem = true;
                    itemPrice = price[x];
                }
            }
            if(validItem)
            {
                JOptionPane.showMessageDialog(null, "The price for the item "
                    + itemSearched + " is $" + itemPrice);
                itemPrice = 0;
            } 
            else
            {
                JOptionPane.showMessageDialog(null, "Item was not found. ");
                itemPrice = 0;
            }
            validItem = false;
            strChoice = JOptionPane.showInputDialog(null, 
                        "Do you want to search for another item number? ",
                        "Price Search", JOptionPane.QUESTION_MESSAGE);
            strChoice = strChoice.toUpperCase();
        }      
        JOptionPane.showMessageDialog(null, 
                "Thank you for using the Price Searcher");
    }   
}