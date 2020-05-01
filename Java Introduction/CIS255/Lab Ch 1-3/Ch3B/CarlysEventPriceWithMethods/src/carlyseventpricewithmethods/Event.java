/*
 * Author: Oberon
 * Date: 10/01/2018
 * Purpose: Chapter 3 Lab - Carly's Event Price with Methods
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
        price = this.numOfGuest * PRICE_PER_GUEST;
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
