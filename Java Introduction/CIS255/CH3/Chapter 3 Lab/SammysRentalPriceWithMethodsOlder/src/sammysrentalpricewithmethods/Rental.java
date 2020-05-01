/*
Author:     Oberon Ilano
Date:       09/26/2018
Purpose:    Chapter 3 Lab - Carlys Event Price with Methods - Rental Class
                    for rental hour for Sammy's Rental Price.
 */
package sammysrentalpricewithmethods;

import java.text.DecimalFormat;

public class Rental 
{
    public final static int MIN_PER_HOUR= 60;
    public final static int RATE_PER_HOUR = 40;

    private String contractNum;
    private int numHours, numMinutes, price;

    public Rental() 
    {
    this.setContract_number("EMPTY");
    this.setHoursAndMinutes(0);
    }

    public Rental(String contract_number, int number_of_minutes) 
    {
    this.setContract_number(contract_number);
    this.setHoursAndMinutes(number_of_minutes);
    }

    public String getContract_number() 
    {
    return contractNum;
    }

    public int getNumber_of_hours() 
    {
    return numHours;
    }

    public int getNumber_of_minutes() 
    {
    return numMinutes;
    }

    public int getPrice() 
    {
    return price;
    }

    private void setContract_number(String contract_number) 
    {
    this.contractNum = contract_number;
    }

    private void setHoursAndMinutes(int number_of_minutes) 
    {
    this.numHours = number_of_minutes / MIN_PER_HOUR;
    this.numMinutes = number_of_minutes % MIN_PER_HOUR;
    if (number_of_minutes <= 60)
        this.price = RATE_PER_HOUR;
    else 
        this.price = RATE_PER_HOUR + this.numMinutes;
    }

    //over ride to print the output
    @Override
    public String toString() 
    {
        String currencyPattern = "$###,##0.00";
                DecimalFormat currency = new DecimalFormat(currencyPattern);
        return  "\n Contract number: " + contractNum 
                + "\n Hour: " + numHours
                + "\n Minute: " + numMinutes
                + "\n Price: " + currency.format(price) + " ";
    }
}
