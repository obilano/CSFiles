/**
 * Author: 		Oberon Ilano
 * Subject:		CIS 315 Advanced Object-Oriented Programming
 * Assignment:	The Election Class
 * Due Date:	June 25, 2019
 */

package TheElectionClass;

public class ElectionTest {

	public static void main(String[] args) {	
		
		//Store candidate informations
		Candidate c1 = new Candidate("Donald", "Trump", 'R', true);
		Candidate c2 = new Candidate("Ben", "Carson", 'R', false);
		Candidate c3 = new Candidate("Jeb", "Bush", 'R', false);
		Candidate c4 = new Candidate("Hillary", "Clinton", 'D', true);
		Candidate c5 = new Candidate("Bernie", "Sanders", 'D', false);
		Candidate c6 = new Candidate("Jim", "Webb", 'D', false);
				
		//Add candidates to election
		Election e1 = new Election();
		e1.addCandidate(c1);
		e1.addCandidate(c2);
		e1.addCandidate(c3);
		e1.addCandidate(c4);
		e1.addCandidate(c5);
		e1.addCandidate(c6);
		
		//display candidates
		System.out.println("Some of the major candidates in the upcoming election are:\n");
		e1.printCandidates();

	}

}
