/*
Author:     Oberon Ilano
Date:       09/24/2018
Purpose:    Chapter 3 Lab - Carlys Event Price with Methods -display
                event number, guest number, total price and event size.
 */
package carlyseventpricewithmethods;

import java.util.Scanner;
import java.text.DecimalFormat;

public class CarlysEventPriceWithMethods 
{
    private static final Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) 
    {
        displayMotto();
        String event = getEventNumber();
        int guest = getNumberOfGuest();
        calculateEventPrice(event, guest);
    }
    
    public static void displayMotto()
    {
        System.out.println(
            "**************************************************\n"
                +"* Carly's makes the food that makes it a party.  *\n"
            + "**************************************************");
    }
    
    public static String getEventNumber()
    {
        System.out.println("Enter the event number/name: ");
        String event = scanner.next();
        return event;
    }
    
    public static void calculateEventPrice(String name, int guestNum)
    {
        final int PRICE_PER_PERSON = 35;
        final int LARGE_EVENT = 50;
        int totalPrice;
        String inputStr, currencyPattern = "$###,##0.00";
                DecimalFormat currency = new DecimalFormat(currencyPattern);
        boolean isLarge;
        totalPrice = guestNum * PRICE_PER_PERSON;
        isLarge = (guestNum >= LARGE_EVENT);
        System.out.println("Event number is " + name
                + ", and the cost for an event with " + guestNum 
                + " will be " + currency.format(totalPrice));
        if (isLarge)
            System.out.println("Large Event" );
        else
            System.out.println("Small Event" );
    }
    
    public static int getNumberOfGuest()
    {
        System.out.println("Enter number of expected guests: ");
        int guest = scanner.nextByte();
        return guest;
    }

   
}
