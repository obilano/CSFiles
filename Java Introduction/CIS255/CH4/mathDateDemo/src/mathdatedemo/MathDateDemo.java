//imports math and time
package mathdatedemo;

import java.lang.Math;
import java.time.*;
import javax.swing.JOptionPane;

public class MathDateDemo 
{
    public static void main(String[] args) 
    {
        LocalDate today = LocalDate.now();
        double radius = 5.0;
        double area;
        
        area = Math.PI * Math.pow(radius, 2);
         JOptionPane.showMessageDialog(null, "Today, " + today
                + ", the area of a circle of radius " + radius 
                + " is " + area);
    }   
}
