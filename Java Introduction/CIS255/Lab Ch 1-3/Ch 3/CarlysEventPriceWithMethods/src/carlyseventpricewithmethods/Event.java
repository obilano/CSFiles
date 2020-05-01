/*
 * Author: Oberon
 * Date: 10/01/2018
 * Purpose: Chapter 3 Lab - Event Class - Carly's Event Price with Methods
 */
package carlyseventpricewithmethods;

import javax.swing.JOptionPane;


public class Event 
{
    public final static double PRICE_PER_GUEST = 35;
    public final static int LARGE_EVENT_CUTOFF = 50;
    
    private String eventNum;
    private int numOfGuest;
    private double price;
    
    public void setEventNum(String newEventNum)
    {
        eventNum = newEventNum;
    }
    
    public void setNumOFGuest (int numOfGuest)
    {
        this.numOfGuest = numOfGuest;
        if (numOfGuest > 0) //calculate price
            price = this.numOfGuest * PRICE_PER_GUEST;
        else // set price to $ 0 if user enter number less than 1
            price = 0.00;
    }
    
    public String getEventNum()
    {
        return eventNum;
    }
    
    public int getNumOfGuest()
    {
        return numOfGuest;
    }
    
    public double getPrice()
    {
        return price;
    }
    
    public static void displayMotto()
    {
       JOptionPane.showMessageDialog(null,
           "******************************************************\n"
           + "* Carly's makes the food that makes it a party. *\n"
           + "******************************************************");
    }
}
