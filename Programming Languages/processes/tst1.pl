#!/usr/bin/perl
use IO::Handle;
pipe(I1, O1);
pipe(I2, O2);
O1->autoflush(1);
O2->autoflush(1);

die("Usage: argv.pl startRange endRange coundOfRand") if (@ARGV != 3);

$startRange= $ARGV[0];
$endRange = $ARGV[1];
$countOfRand = $ARGV[2];




  if ($ids==0)
  {		
					#child
	foreach $i (0..3)
	{
		foreach $i (1..$countOfRand)
  		{
  			$rand = int($startRange + rand($endRange - $startRange + 1));
  			print $rand, " ";
  			$sum += $rand;
 		}
  		printf("\nSum:\t%d\n", $sum);
		close I2;
		close O1;	
		print O2 "$sum";
		close O2;  	
		&child;
		close I1;
	}
  }

  else
  {	
					# Parent

	foreach $i (0..3)
	{
		close I1;
		close O2;
		$globalSum += $childSum = <I2>;
		print "Global Sum: $globalSum\n";
		print "Child Sum: $childSum\n";
    		$childMean = $childSum / $countOfRand;
  		printf("Child mean: %.1f\n", $childMean);
		$globalMean = $globalSum / 4;
  		printf("Global mean: %.1f\n", $gloablMean);
		print O1 "$childMean";
		close I2;
		close O1;
	}
  }


#This is the parent process
foreach $i (0..3)
{

	printf("Range of numbers:\t\t\t%.0d through %.0d\n", $ARGV[0], $ARGV[1]);
	printf("Numbers generated by each process:\t%0.d\n", $ARGV[2]); 
	printf("Global Mean (rounded to nearest tenth): %.f\n\n", $globalMean);

	$x = waitpid $ids[$i], $FLAGS;
	#print "PARENT: I just got word that $x died\n";

}

sub child
{

  sleep (3);
  print "Child: $$  Hello I'm done\n";
  $mean = <I1>;
  print "Mean: $mean\n";
  exit;
}


