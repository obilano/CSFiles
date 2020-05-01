/*
* Author:  Oberon Ilano 
* Date:    10/08/2018 
* Purpose: Chapter 4 Lab - Carly's Event Price with Constructors 
*/
package carlysconstructdemo;
 
import java.text.DecimalFormat;
import javax.swing.JOptionPane;
 
public class CarlysConstructDemo 
{    
    public static void main(String[] args)    
    {        
        int numOfGuests;        
        String eventNumber;        
        Event event1 = new Event(); //Create new object        
        Event event2 = new Event();//second cobjet with default constructor
 
        eventNumber = getEventNumber();        
        numOfGuests = getNumOfGuests();        
        event1.setEventNum(eventNumber);    //Put event number in object        
        event1.setGuests(numOfGuests);      //Put number of guests in object
 
        eventNumber = getEventNumber();        
        numOfGuests = getNumOfGuests();        
        Event event3 = new Event(eventNumber, numOfGuests);
 
        Event.displayMotto();        
        displayEventInfo(event1);        
        displayEventInfo(event2);//display default constrcutor      
        displayEventInfo(event3);    
    }
 
    public static int getNumOfGuests()    
    {        
        String inputStr;
 
        inputStr = JOptionPane.showInputDialog(null,            
                "Enter  number of expected guests:");        
        return(Integer.parseInt(inputStr));    
    }

     public static String getEventNumber()    
     {        String inputStr;
 
        inputStr = JOptionPane.showInputDialog(null,            
                "Enter the event number:");        
        return inputStr;    
     }
 
    public static void displayEventInfo(Event event)    
    {        
        String inputStr, currencyPattern = "$###,##0.00";
        DecimalFormat currency = new DecimalFormat(currencyPattern);
        boolean isLargeEvent;
 
        isLargeEvent = (event.getNumOfGuests()>= Event.LARGE_EVENT_CUTOFF);        
        JOptionPane.showMessageDialog(null, "The cost for Event "            
                + event.getEventNum() + " with "            
                + event.getNumOfGuests() + " guests will be " 
                + currency.format(event.getPrice())            
                + "\nLarge Event: " + isLargeEvent);    
    } 
}

