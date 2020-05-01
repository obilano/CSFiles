/*
 * Author: Oberon
 * Date: 10/017/2018
 * Purpose: Chapter 5 Lab - Sammy's Rent Price with If/Else
 */
package sammysrentalwithif;


import javax.swing.JOptionPane;

public class Rental 
{
    public final static int MIN_PER_HOUR = 60;
    public final static int FIRST_HOUR = 40;
    
    private String contractNum;
    private int numOfMins;
    private double price;
    
    Rental() //default constructor
    {
        contractNum = "A000";
        numOfMins = 0;
    }

    Rental(String contractNumber, int numOfMinutes) 
    {
        setContractNum(contractNumber);
        setNumOfMins(numOfMinutes);
    }
    public void setContractNum(String newContractNum)
    {
        contractNum = newContractNum;
    }
    
    public void setNumOfMins (int numOfMins)
    {
        this.numOfMins = numOfMins;
        int oneHour = this.numOfMins/60;//calculate how many hours
        int remainMin = this.numOfMins%60;//calcualte remaining mins
        if (this.numOfMins < 41)
        {
            oneHour += 1; //if minutes greater than 40
            remainMin = 0;     
        }
        price = FIRST_HOUR * oneHour + remainMin;
        if(this.numOfMins < 1)
        price = 0.00;
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
       JOptionPane.showMessageDialog(null, "SSSSSSSSSSSSSSSSSSSSSSSSSS\n"
            +"S Sammy's makes it fun in the sun. S\n"
            + "SSSSSSSSSSSSSSSSSSSSSSSSSS");
    }
}