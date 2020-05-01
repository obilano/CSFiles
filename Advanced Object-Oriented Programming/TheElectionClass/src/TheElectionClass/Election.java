/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Election Class
 * Due Date:	June 25, 2019
 */

package TheElectionClass;

import java.util.*;

public class Election {
	private  List<Candidate>candidates;
	
	//constructor
	public Election() {
		candidates = new ArrayList<Candidate>();
	}
	
	//add candidates method
	public void addCandidate(Candidate a) {
		candidates.add(a);
	}
	
	//display result method
	public void printCandidates() {
		System.out.println("First Name\tLast Name\tParty\tTrustworthy "
				+ "\n---------------------------------------------------");
		for(int i = 0; i < candidates.size(); i++) {
			System.out.println(candidates.get(i).getFirstName() + "\t\t" + 
					candidates.get(i).getLastName() + "\t\t" + candidates.get(i).getParty() +
					"\t" + candidates.get(i).isTrustworthy());
		}
	}
	
}
