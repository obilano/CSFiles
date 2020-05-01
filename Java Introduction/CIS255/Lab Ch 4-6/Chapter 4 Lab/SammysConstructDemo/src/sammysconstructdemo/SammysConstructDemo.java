/*
 * Author: Oberon Ilano
 * Date: 10/08/2018
 * Purpose: Chapter 4 Lab - Sammy's Rent Price with Constructors
 */
package sammysconstructdemo;

import java.text.DecimalFormat;
import javax.swing.JOptionPane;

public class SammysConstructDemo 
{

        public static void main(String[] args)
        {
           int numOfMins;
           String contractNumber;
           Rental rent1 = new Rental(); // create new object
           Rental rent2 = new Rental ();//second object with default constrctor

           contractNumber = getContractNum();
           numOfMins = getNumOfMins();
           rent1.setContractNum(contractNumber); //put contract number to object
           rent1.setNumOfMins(numOfMins); //put number of minutes in object
           
           contractNumber = getContractNum();
           numOfMins = getNumOfMins();
           Rental rent3 = new Rental(contractNumber, numOfMins);
           
           Rental.companyMotto();
           displayRentalInfo(rent1);
           displayRentalInfo(rent2);//display default constructor
           displayRentalInfo(rent3);
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