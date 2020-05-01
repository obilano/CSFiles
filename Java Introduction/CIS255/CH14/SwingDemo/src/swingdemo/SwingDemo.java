/*
    Author:         Oberon Ilano
    Description:    Chapter 14, Swing Demo (GUI)
    Date:           10/31/2018
 */
package swingdemo;

//import java.awt.FlowLayout;
import javax.swing.*;
//import java.awt.Font;
import java.awt.*;

public class SwingDemo 
{
    public static void main(String[] args) 
    {
        final int FRAME_WIDTH = 350;
        final int FRAME_HEIGHT = 200;
        Font bigFont = new Font("Arial", Font.BOLD, 36);
        JFrame myFrame = new JFrame ("My First Frame");
        JLabel greeting = new JLabel ("Good day!");
        JLabel question = new JLabel ("Who are you?");
        myFrame.setLayout(new FlowLayout());  
        
        myFrame.setSize(FRAME_WIDTH, FRAME_HEIGHT);
        myFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        greeting.setFont(bigFont);
        question.setFont(bigFont);
        myFrame.add(greeting);
        myFrame.add(question);
        myFrame.setVisible(true);
    }
    
}
