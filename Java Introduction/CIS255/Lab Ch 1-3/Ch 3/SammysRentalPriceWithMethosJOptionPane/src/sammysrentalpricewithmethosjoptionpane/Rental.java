/*
 * Author: Oberon
 * Date: 10/01/2018
 * Purpose: Chapter 3 Lab - Rental Class
 */
package sammysrentalpricewithmethosjoptionpane;

import javax.swing.JOptionPane;

public class Rental 
{
     public final static int MIN_PER_HOUR = 60;
    public final static int FIRST_HOUR = 40;
    
    private String contractNum;
    private int numOfMins;
    private double price;
    
    public void setContractNum(String newContractNum)
    {
        contractNum = newContractNum;
    }
    
    public void setNumOfMins (int numOfMins)
    {
        this.numOfMins = numOfMins;
        int oneHour = this.numOfMins/60;//calculate how many hours
        int remainMin = this.numOfMins%60;//calcualte remaining mins
        if (this.numOfMins > 60) // price for more than 1 hour
            {
            price = FIRST_HOUR * oneHour + remainMin;
            }
        else if (this.numOfMins > 0 && this.numOfMins < 61)
            price = 40.00; // first hour price
        else 
            price = 0.00; // if less than 1 minute is enter for minutes
    }
    
    public String getContractNum()
    {
        return contractNum;
    }
    
    public int getNumOfMins()
    {
        return numOfMins;
    }
    
    public double getPrice()
    {
        return price;
    }
    
    public static void companyMotto()
    {
       JOptionPane.showMessageDialog(null,
           "******************************************************\n"
           + "* Carly's makes the food that makes it a party. *\n"
           + "******************************************************");
    }
    
}
