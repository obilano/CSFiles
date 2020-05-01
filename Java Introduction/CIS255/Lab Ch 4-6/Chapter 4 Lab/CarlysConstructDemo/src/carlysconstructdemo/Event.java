/*
* Author:  Oberon Ilano 
* Date:    10/08/2018 
* Purpose: Chapter 4 Lab - Carly's Event Price with Constructors 
*/
package carlysconstructdemo;
 
import javax.swing.JOptionPane;
 
public final class Event 
{    
    public final static double PRICE_PER_GUEST = 35.00;    
    public final static int LARGE_EVENT_CUTOFF = 50;
    private String eventNum;    private int numOfGuests;    
    private double price;
 
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
        price = this.numOfGuests * PRICE_PER_GUEST;   
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
 
    public static void displayMotto()    
    {        
        JOptionPane.showMessageDialog(null,
                "******************************************************\n"            
                + "* Carly's makes the food that makes it a party. *\n"            
                + "******************************************************");    
    } 
}

