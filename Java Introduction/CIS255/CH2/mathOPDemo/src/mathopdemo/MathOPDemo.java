
package mathopdemo;

import javax.swing.JOptionPane;

public class MathOPDemo 
{

    public static void main(String[] args) 
    {
       int totalAge, age1, age2, age3, age4, age5;
       String inputStr;
       double avgAge;
       int count = 5;
       
       inputStr =JOptionPane.showInputDialog(null, "Enter Age #1: ");
       age1 = Integer.parseInt(inputStr);
       inputStr =JOptionPane.showInputDialog(null, "Enter Age #2: ");
       age2 = Integer.parseInt(inputStr);
       inputStr =JOptionPane.showInputDialog(null, "Enter Age #3: ");
       age3 = Integer.parseInt(inputStr);
       inputStr =JOptionPane.showInputDialog(null, "Enter Age #4: ");
       age4 = Integer.parseInt(inputStr);
       inputStr =JOptionPane.showInputDialog(null, "Enter Age #5: ");
       age5 = Integer.parseInt(inputStr);
       
       totalAge = age1 + age2 + age3 + age4 + age5;
       avgAge = (double)totalAge/count;
       
       JOptionPane.showMessageDialog(null, "The average age is " + avgAge);  
    }
    
}
