/*
 * Author: Oberon
 * Date: 10/17/2018
 * Purpose: Chapter 5 Lab - Sammy's Rent Price with If/Else
 */
package sammysrentalwithif;

import java.text.DecimalFormat;
import javax.swing.JOptionPane;

public class SammysRentalWithIf
{

        public static void main(String[] args)
        {
           int numOfMins;
           String contractNumber;
           Rental longRent;
           Rental rent1 = new Rental(); // create new object
           Rental rent2 = new Rental ();//second object with default constrctor
           Rental rent4 = new Rental ();
           Rental rent5 = new Rental();
           Rental rent6 = new Rental ();

           contractNumber = getContractNum();
           numOfMins = getNumOfMins();
           rent1.setContractNum(contractNumber); //put contract number to object
           rent1.setNumOfMins(numOfMins); //put number of minutes in object
           
           contractNumber = getContractNum();
           numOfMins = getNumOfMins();
           Rental rent3 = new Rental(contractNumber, numOfMins);
           
           contractNumber = getContractNum();
           numOfMins = getNumOfMins();
           rent4.setContractNum(contractNumber); //put contract number to object
           rent4.setNumOfMins(numOfMins); //put number of minutes in object
           
           contractNumber = getContractNum();
           numOfMins = getNumOfMins();
           rent5.setContractNum(contractNumber); //put contract number to object
           rent5.setNumOfMins(numOfMins); //put number of minutes in object
           
           contractNumber = getContractNum();
           numOfMins = getNumOfMins();
           rent6.setContractNum(contractNumber); //put contract number to object
           rent6.setNumOfMins(numOfMins); //put number of minutes in object
           
           Rental.companyMotto();
           displayRentalInfo(rent1);
           displayRentalInfo(rent2);//display default constructor
           displayRentalInfo(rent3);
           displayRentalInfo(rent4);
           displayRentalInfo(rent5);
           displayRentalInfo(rent6);
           
           longRent = longerRent(rent1, rent2);
           JOptionPane.showMessageDialog(null, "Between rents " 
            + rent1.getContractNum() + " and " + rent2.getContractNum()
            + "\nthe longer rent was " + longRent.getContractNum(),
            "Longest Rent", JOptionPane.INFORMATION_MESSAGE);
           
           longRent = longerRent(rent3, rent4);
           JOptionPane.showMessageDialog(null, "Between rents " 
            + rent3.getContractNum() + " and " + rent4.getContractNum()
            + "\nthe longer rent was " + longRent.getContractNum(),
            "Longest Rent", JOptionPane.INFORMATION_MESSAGE);
           
           longRent = longerRent(rent5, rent6);
           JOptionPane.showMessageDialog(null, "Between rents " 
            + rent5.getContractNum() + " and " + rent6.getContractNum()
            + "\nthe longer rent was " + longRent.getContractNum(),
            "Longest Rent", JOptionPane.INFORMATION_MESSAGE);
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
         
        public static Rental longerRent(Rental first, Rental second)
        {
            if(first.getNumOfMins() > second.getNumOfMins())
            return first;
            else
            return second;
        }
}