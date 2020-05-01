package com.acme.financial;

public class CheckingAccount extends Account {
	public CheckingAccount(int startingBalance) {
		this.balance = startingBalance;
	}
	
	public void withdraw(int amount) {
		this.balance -= amount;
	}
	
	public void transfer(int amount, CheckingAccount other) {
		this.balance -= amount;
		other.balance += amount;
		
	}
}
