/*
 * Author: Oberon
 * Date: 10/01/2018
 * Purpose: Chapter 3 Lab - Sammy's Rent Price with Methods
 */
package sammysrentalpricewithmethosjoptionpane;

import java.text.DecimalFormat;
import javax.swing.JOptionPane;

public class SammysRentalPriceWithMethosJOptionPane
{

        public static void main(String[] args)
        {
           int numOfMins;
           String contractNumber;
           Rental rent1 = new Rental(); // create new object

           contractNumber = getContractNum();
           numOfMins = getNumOfMins();
           rent1.setContractNum(contractNumber);//put contract number to object
           rent1.setNumOfMins(numOfMins); //put number of minutes in object

           Rental.companyMotto();
           displayRentalInfo(rent1);
        }
        
        public static int getNumOfMins()
        {
           String inputStr;
           inputStr = JOptionPane.showInputDialog(null,
              "\"Enter the number of minutes for a rented equipment: ");
           return(Integer.parseInt(inputStr));
        }
        
        public static String getContractNum()
        {
           String inputStr;
           inputStr = JOptionPane.showInputDialog(null,
              "Enter number the contract number:");
           return inputStr;
        }
        
         public static void displayRentalInfo(Rental rent)
        {
            String currencyPattern = "$###,##0.00";
            DecimalFormat currency = new DecimalFormat(currencyPattern);
            JOptionPane.showMessageDialog(null, "The cost for a rent " 
                + rent.getContractNum() + " with "+ rent.getNumOfMins() 
                + " minute(s) will be " + currency.format(rent.getPrice()));
        }                  
}
