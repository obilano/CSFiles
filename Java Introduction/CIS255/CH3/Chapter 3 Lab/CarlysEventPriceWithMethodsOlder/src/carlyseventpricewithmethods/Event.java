/*
Author:     Oberon Ilano
Date:       09/124/2018
Purpose:    Chapter 3 Lab - Carly's Event Price - Event Class, 
                            for Carly's Event.
 */
package carlyseventpricewithmethods;

import java.text.DecimalFormat;

public class Event 
{
    public static int PRICE_PER_PERSON = 35;
    public static int EVENT_SIZE = 50;
    
    private String eventNum;
    private int numGuest;
    private double price;
    
    public Event()
    {
        this.eventNum = "EMPTY";
        this.numGuest = 0;
        this.price = 0;
    }
    
    public void setEventNumber(String eventNum)
    {
        this.eventNum = eventNum;
    }
    
    public void setGuests(int numGuest)
    {
        this.numGuest = numGuest;
        calculatePrice(numGuest);
    }
    
    private void calculatePrice(int numGuest)
    {
        price = numGuest * PRICE_PER_PERSON;
    }
    
    public String getEventNumber()
    {
        return eventNum;
    }
    
    public int getGuests()
    {
        return numGuest;
    }
    
    public double getPrice()
    {
        return price;
    }
    
    @Override
    public String toString() 
    {
        String currencyPattern = "$###,##0.00";
                DecimalFormat currency = new DecimalFormat(currencyPattern);
        return  "\n Event number: " + eventNum
                + "\n Guest: " + numGuest
                + "\n Price: " + currency.format(price) + " ";
    }
}
