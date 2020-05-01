package edu.una.csis.quantum;
import com.gluonhq.strange.algorithm.Classic;
public class Main {
	
	public static void main(String[] args) {
		
		int bit = Classic.randomBit();
		
		//System.out.println(bit);		
		int heads = 0;
		int tails = 0;
		for (int i = 0; i < 10000; i++)
		{
			if(Classic.randomBit() > 0)
			{
				heads++;
			}
			else
			{
				tails++;
			}
		}
		System.out.println("heads: " + heads + " tails: " + tails);
	}
	
}
