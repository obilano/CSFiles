package com.acme.financial;

public class Account {

	protected int balance;

	public Account() {
		super();
	}

	public void deposit(int amount) {
		this.balance += amount;
	}

	public int getBalance() {
		return balance;
	}

}