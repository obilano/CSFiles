/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Election Class
 * Due Date:	June 25, 2019
 */

package TheElectionClass;

public class Candidate {
	private String firstName;
	private String lastName;
	private char party;
	private boolean trustworthy;
	
	//constructors
	public Candidate(String f, String l, char p, boolean t) {		
		firstName = f;
		lastName = l;
		party = p;
		trustworthy = t;
	}
	
	//getters and setters
	public String getFirstName() {
		return firstName;
	}
	public String getLastName() {
		return lastName;
	}
	public char getParty() {
		return party;
	}
	public void setParty(char p) {
		party = p;
	}
	public boolean isTrustworthy() {
		return trustworthy;
	}
	public void setTrustworthy(boolean t) {
		trustworthy = t;
	}
	
	
}
