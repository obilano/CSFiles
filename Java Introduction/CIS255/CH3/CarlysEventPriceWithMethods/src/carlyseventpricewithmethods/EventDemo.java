/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package carlyseventpricewithmethods;

/**
 *
 * @author obi20
 */
public class EventDemo 
{
    private static Object CarlysEventPriceWithMethodsJOptionPane;
    private static Object CarlyEventPriceWithMethodsJOptionPane;

    public static void main(String[] args)
    {
        int guests;
        guests = CarlysEventPriceWithMethodsJOptionPane.getNumberOgGuests();
        String eventNum = CarlysEventPriceWithMethodsJOptionPane.getEventNum();
        Event event = new Event();
        event.setGuestNum(guests);
        CarlyEventPriceWithMethodsJOptionPane.displayEvent(event);
    }
}
