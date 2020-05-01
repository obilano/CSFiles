/*  Author:  Oberon Ilano 
*   Date:    10/15/2018 
*   Purpose: Chapter 5 Lab - Carly's Event Price with If 
*/ 
package carlyseventwithif;
 
import javax.swing.JOptionPane;
 
public final class Event 
{    
    public final static double HIGHER_PRICE_PER_GUEST = 35.00; 
    public final static double LOWER_PRICE_PER_GUEST = 32.00; 
    public final static int LARGE_EVENT_CUTOFF = 50;
    private String eventNum;    
    private int numOfGuests;    
    private double price;
    private double pricePerGuest;
 
    Event()  //default constructor    
    {        
        eventNum = "A000";        
        numOfGuests = 0;    
    }
 
    Event(String newEventNum, int newNumOfGuests)    
    {        
        setEventNum(newEventNum);        
        setGuests(newNumOfGuests);    
    }
    
    public void setEventNum(String newEventNum)    
    {        
        eventNum = newEventNum;    
    }
 
    public void setGuests(int numOfGuests)    
    {        
        this.numOfGuests = numOfGuests;  
        if(this.numOfGuests >= 50)
            price = this.numOfGuests * HIGHER_PRICE_PER_GUEST;  
        else
            price = this.numOfGuests * LOWER_PRICE_PER_GUEST; 
        if (this.numOfGuests < 1)
            price = 0.00;
    }
    
    public String getEventNum()    
    {        
        return eventNum;    
    }

    public int getNumOfGuests()    
    {        
        return numOfGuests;    
    }
 
    public double getPrice()    
    {        
        return price;    
    }
 
    public double getPricePerGuest ()
    {
        return pricePerGuest;
    }
    
    public static void displayMotto()    
    {        
        JOptionPane.showMessageDialog(null,
                "******************************************************\n"            
                + "* Carly's makes the food that makes it a party. *\n"            
                + "******************************************************");    
    } 
    
    public boolean isLargeEvent()
    {
        //return (numOfGuests >= 50) ? true: false;
        boolean isLarge = (numOfGuests >= 50) ? true: false;
        return isLarge;
    }
    
}

