/*  Author:  Oberon Ilano 
*   Date:    10/15/2018 
*   Purpose: Chapter 5 Lab - Carly's Event Price with If 
*/ 
package carlyseventwithif;
 
import java.text.DecimalFormat;
import javax.swing.JOptionPane;
 
public class CarlysEventWithIf 
{    
    public static void main(String[] args)    
    {        
        int numOfGuests;        
        String eventNumber;        
        Event event1 = new Event(); //Create new object        
        Event event2 = new Event(); //second cobjet with default constructor
        Event event4 = new Event();
        Event event5 = new Event();
        Event event6 = new Event();
        Event largerEvent;
        
        eventNumber = getEventNumber();        
        numOfGuests = getNumOfGuests();        
        event1.setEventNum(eventNumber); //Put event number in object        
        event1.setGuests(numOfGuests); //Put number of guests in object
        
        eventNumber = getEventNumber();        
        numOfGuests = getNumOfGuests();        
        Event event3 = new Event(eventNumber, numOfGuests);
        
        eventNumber = getEventNumber();        
        numOfGuests = getNumOfGuests(); 
        event4.setEventNum(eventNumber); //Put event number in object        
        event4.setGuests(numOfGuests); 
        
        eventNumber = getEventNumber();        
        numOfGuests = getNumOfGuests(); 
        event5.setEventNum(eventNumber); //Put event number in object        
        event5.setGuests(numOfGuests); 
        
        eventNumber = getEventNumber();        
        numOfGuests = getNumOfGuests(); 
        event6.setEventNum(eventNumber); //Put event number in object        
        event6.setGuests(numOfGuests); 
        
        Event.displayMotto();        
        displayEventInfo(event1);        
        displayEventInfo(event2); //display default constrcutor      
        displayEventInfo(event3);
        displayEventInfo(event4);
        displayEventInfo(event5);
        displayEventInfo(event6); 
        
        //Which events are larger
        largerEvent = isLargerEvent(event1, event2);
        JOptionPane.showMessageDialog(null, "Between events " 
            + event1.getEventNum() + " and " + event2.getEventNum()
            + "\nthe larger event was " + largerEvent.getEventNum(),
            "Largest Event", JOptionPane.INFORMATION_MESSAGE);
        
        largerEvent = isLargerEvent(event3, event4);
        JOptionPane.showMessageDialog(null, "Between events " 
            + event3.getEventNum() + " and " + event4.getEventNum()
            + "\nthe larger event was " + largerEvent.getEventNum(),
            "Largest Event", JOptionPane.INFORMATION_MESSAGE);
        
                largerEvent = isLargerEvent(event5, event6);
        JOptionPane.showMessageDialog(null, "Between events " 
            + event5.getEventNum() + " and " + event6.getEventNum()
            + "\nthe larger event was " + largerEvent.getEventNum(),
            "Largest Event", JOptionPane.INFORMATION_MESSAGE);
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
 
        isLargeEvent = event.isLargeEvent();        
        JOptionPane.showMessageDialog(null, "The cost for Event "            
                + event.getEventNum() + " with "            
                + event.getNumOfGuests() + " guests will be " 
                + currency.format(event.getPrice())            
                + "\nLarge Event: " + isLargeEvent);    
    } 
    
    public static Event isLargerEvent(Event first, Event second)
    {
        if(first.getNumOfGuests() > second.getNumOfGuests())
            return first;
        else
            return second;
    }
}

