#!/usr/bin/perl 

use IO::Handle;

pipe(PARENTREAD, PARENTWRITE);
pipe(CHILDREAD, CHILDWRITE);

PARENTWRITE->autoflush(1);
CHILDWRITE->autoflush(1);

die("Usage: argv.pl startRange endRange countOfRand") if (@ARGV != 3);

$startRange= $ARGV[0];
$endRange = $ARGV[1];
$countOfRand = $ARGV[2];

 if ($child[$i] = fork()) { # Parent code
   close CHILDREAD; # We don't need these in the parent
   close PARENTWRITE;
   chomp($childSum= <PARENTREAD>);
   print "Got a value of $childSum from child\n";
   $childMean = $childSum / $countOfRand;
   print CHILDWRITE "$childMean;\n";
   $globalSum += $childSum;
   $globalMean = $globalSum / 4;
   print "Global Mean: $globalMean";
   close PARENTREAD;
   close CHILDWRITE;
   waitpid($child,0);
 } 
 else 
 {
	foreach $i (1..$countOfRand)
  	{
  		$rand = int($startRange + rand($endRange - $startRange + 1));
  		print $rand, " ";
  		$sum += $rand;
 	}

   close PARENTREAD; # We don't need these in the child
   close CHILDWRITE;
   chomp($mean = <CHILDREAD>);
   print "Got $mean\n";
   print PARENTWRITE "$sum\n";
   close CHILDREAD;
   close PARENTWRITE;
   exit;
 }
