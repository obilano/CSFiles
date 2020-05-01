
package joptionpaneiodemo;

import javax.swing.JOptionPane;
import java.text.*;

public class JOptionPaneIODemo 
    {
        public static void main(String[] args) 
            {
                final double HOURS_IN_WEEK = 37.5;
                double wage, weeklyPay;
                int dependents;
                String inputStr, currencyPattern = "$###,##0.00";
                DecimalFormat currency = new DecimalFormat(currencyPattern);
                inputStr = JOptionPane.showInputDialog(null, 
                        "Enter employee's hourly wage: ", "Salary Input", 
                        JOptionPane.QUESTION_MESSAGE);
                wage = Double.parseDouble(inputStr);
                inputStr = JOptionPane.showInputDialog(null,
                        "How many dependents? ", "Dependents Input", 
                        JOptionPane.QUESTION_MESSAGE);
                dependents = Integer.parseInt(inputStr);
                
                weeklyPay = wage * HOURS_IN_WEEK;
                
                JOptionPane.showMessageDialog(null, 
                        "Weekly salary is" + currency.format(weeklyPay) +
                        "\nDeductions will be made for " + dependents + 
                        " dependents");
            }
    }
