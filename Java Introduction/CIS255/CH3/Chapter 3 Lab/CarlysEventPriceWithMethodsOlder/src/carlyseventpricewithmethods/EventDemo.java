/*
Author:     Oberon Ilano
Date:       09/24/2018
Purpose:    Chapter 3 Lab - Carlys Event Price with Methods - Event Demo,
                dispay motto, using accessors for number of guest, 
                and to set and access event number.
 */
package carlyseventpricewithmethods;

public class EventDemo 
{

    public static void main(String[] args)
    {
        int numGuest=CarlysEventPriceWithMethods.getNumberOfGuest();
        String eventNum = 
               CarlysEventPriceWithMethods.getEventNumber();
        Event newEvent = new Event();
        newEvent.setEventNumber(eventNum);
        newEvent.setGuests(numGuest);
        CarlysEventPriceWithMethods.displayMotto();
        System.out.println(newEvent.toString());
    }
    
}
