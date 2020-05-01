
package methoddemo2;

import javax.swing.JOptionPane;
import java.text.DecimalFormat;

public class MethodDemo2 
{
    public static void main(String[] args) 
    {
        double curSalary, myRate, newSalary;
        String inputStr;
        String currencyPattern = "$###,##0.00";
           DecimalFormat currency = new DecimalFormat(currencyPattern);
        displayAddress(); // call the method    
        inputStr = JOptionPane.showInputDialog(null, "Enter current salary: ");
        curSalary = Double.parseDouble(inputStr);
        // predictRaise(curSalary);
        inputStr = JOptionPane.showInputDialog(null, 
                  "Enter cuurent % rate raise : ");
        myRate = Double.parseDouble(inputStr);
        newSalary = calcRaise (curSalary, myRate); //method that returns value
        JOptionPane.showMessageDialog(null, "Current Salary: " + 
                currency.format(curSalary) + "\nAfter Raise: " + 
                currency.format(newSalary)); 
    }
    
    public static void displayAddress()/* methood definition, takes no argument
                or parameter*/
    {
        JOptionPane.showMessageDialog(null, "XYZ Company\n" + 
                   "8900 U.S Hwy 14 \n" + "Crystal Lake, IL 60014");
    }
    
    public static void predictRaise (double salary) //method with 1 parameter
    {
        final double RAISE_RATE = 1.10;
        String currencyPattern = "$###,##0.00";
           DecimalFormat currency = new DecimalFormat(currencyPattern);
        double newSalary;
        newSalary = salary * RAISE_RATE;
        JOptionPane.showMessageDialog(null, "Current Salary: " + 
                currency.format(salary) + "\nAfter Raise: " + 
                currency.format(newSalary));  
    }
    //method with 1 parameter
    public static double calcRaise(double salary, double rate) 
    {
        double newSalary;
        newSalary = salary * (rate / 100) + salary;
        return newSalary;
    }
}

