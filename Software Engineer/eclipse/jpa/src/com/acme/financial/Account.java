package com.acme.financial;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.Table;

@Entity
@Table(name = "ACCOUNT")
public class Account {
	@Id
	@GeneratedValue (strategy = GenerationType.AUTO)
	@Column(name = "ACCT_NUMBER")
	private long accountNumber;
	
	@Column(name = "BALANCE")
	private int balance;
	
	public long getAccountNumber() {
		return accountNumber;
	}
	public void setAccountNumber(long number) {
		this.accountNumber = number;
	}
	
	public void deposit(int amount) {
		this.balance += amount;
	}
	
	public int getBalance() {
		return balance;
	}

}
