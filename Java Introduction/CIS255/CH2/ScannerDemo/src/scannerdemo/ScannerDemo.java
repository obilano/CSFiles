
package scannerdemo;

import java.util.Scanner;

public class ScannerDemo 
    {
        public static void main(String[] args) 
            {
                String name;
                int age;
                Scanner InputDevice = new Scanner(System.in);
                
                System.out.print("Please enter your name: ");
                name = InputDevice.nextLine();
                do
                {
                System.out.print("Please enter your age: ");
                age = InputDevice.nextInt();
                }while(age<1 || age > 98);
                System.out.println ("Your name is " + name + " and you are " 
                        + age + " years old.");
            }
    }
