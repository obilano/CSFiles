/*
Author:         Oberon Ilano   
Date:           12/5/2018
Description:    Inherit Demo, Costumer Class, Ch 10
*/
package inheritdemo;

public class Costumer extends Person
{
    private double balance;
    
    public void setBalance(double newBalance)
    {
        balance = newBalance;
    }
    public double getBalance()
    {
        return balance;
    }
    
}
