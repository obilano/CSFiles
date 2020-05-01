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
        if (this.numOfMins > 60)
            {
            price = FIRST_HOUR * oneHour + remainMin;
            }
            else
            price = 40.00;
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
