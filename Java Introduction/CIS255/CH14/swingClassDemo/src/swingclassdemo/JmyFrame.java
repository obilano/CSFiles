/*
    Author:         Oberon Ilano
    Description:    Chapter 14 Swing Demo
    Date:           10/31/2018
 */
package swingclassdemo;

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
//import java.awt.FlowLayout;
//import java.awt.Font;
//import javax.swing.JFrame;
//import javax.swing.JLabel;

public class JmyFrame extends JFrame implements ActionListener
{
    final int FRAME_WIDTH = 360;
    final int FRAME_HEIGHT = 250;
    Font bigFont = new Font("Arial", Font.BOLD, 36);
    Font mediumFont = new Font("Arial", Font.BOLD, 24);
    JLabel greeting = new JLabel ("Good day!");
    JLabel question = new JLabel ("Who are you?");
    JTextField nameField = new JTextField(8);
    JButton nameButton = new JButton("Enter");
    JLabel greetMessage = new JLabel("");
    
    public JmyFrame()
    {
        super("My First Frame");
        setSize(FRAME_WIDTH, FRAME_HEIGHT);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        greeting.setFont(bigFont);
        question.setFont(mediumFont);
        nameField.setFont(mediumFont);
        nameButton.setFont(mediumFont);
        greetMessage.setFont(mediumFont);
        setLayout(new FlowLayout());  
        add(greeting);
        add(question);
        add(nameField);
        add(nameButton);
        add(greetMessage);
        setVisible(true);  
        nameButton.addActionListener(this);
    }  
    
    //@Override
    public void actionPerformed (ActionEvent e)
    {
        String name = nameField.getText();
        String salutation = "  Well hello there, " + name;
        greetMessage.setText(salutation);    
    }
}
