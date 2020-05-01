/* 
* Author: Oberon
 * Date: 10/01/2018
 * Purpose: Chapter 3 Lab - Carly's Event Price with Methods
 */
package carlyseventpricewithmethods;

import java.text.DecimalFormat;
import javax.swing.JOptionPane;

public class EventDemo
{

    public static void main(String[] args)
    {
       int numOfGuests;
       String eventNumber;
       Event event1 = new Event(); // create new object
       
       eventNumber = getEventNum();
       numOfGuests = getNumOfGuests();
       event1.setEventNum(eventNumber); //put event number to object
       event1.setNumOFGuest(numOfGuests); //put number of guest in object
       
       Event.displayMotto();
       displayEventInfo(event1);
    }
    
    public static int getNumOfGuests()
    {
       String inputStr;
       inputStr = JOptionPane.showInputDialog(null,
          "Enter number of expected guests:");
       return(Integer.parseInt(inputStr));
    }
    
    public static String getEventNum()
    {
       String inputStr;
       inputStr = JOptionPane.showInputDialog(null,
          "Enter number the event number:");
       return inputStr;
    }
    
    public static void displayEventInfo(Event event)
    {
       String currencyPattern = "$###,##0.00";
            DecimalFormat currency = new DecimalFormat(currencyPattern);
       boolean isLargeEvent;
       isLargeEvent = (event.getNumOfGuest() >= Event.LARGE_EVENT_CUTOFF);
           JOptionPane.showMessageDialog(null, "The cost for an event " 
                + event.getEventNum() + " with "+ event.getNumOfGuest() 
                + " will be " + currency.format(event.getPrice())
                + "\nLarge Event: " + isLargeEvent);
    }    
}

