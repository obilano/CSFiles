#!/usr/bin/perl 

#Author:		Oberon Ilano
#Assignment:		12
#Class:			CS 410w
#Due Date:		February 20, 2020
#Description:		This program will accept three command-line arguments.
#			The parent will create four child  processes. Each
#			child will generate random numbers and will send the sum
#			to the parent. The parent will calculate the global mean  
#			and send it to each child to be compared. The will wait for 
#			each child process to be finished. Each child will 
#			display their own statistic.

use CGI qw(:standard);

#call function header and start html
print header();
print start_html("Currency Processing");

#background color for the page
print "<body style=\"background-color:#ffeee6;\">\n";

#open file to read exchange rates or quit if it fails
open(FR, "<exchangerates.txt") or die "Error with file. Goodbye!";

#call param function
$dollar = param("dollar");
$currency = param("currency");

#store rates from array to its variable
@line = <FR>;
$british = @line[0];
$euros = @line[1];
$mexican = @line[2];
$canadian = @line[3];

#close the exchange rates file
close(FR);

print     "<h1>Converting USD</h1>\n";

#store local time for display and open exchanges.txt to store results or exit ifit  fails
$datestring = localtime();
open(FP, ">>exchanges.txt") or  die "Error with file. Goodbye!";

if($currency eq 'P' and $dollar > 0) 
{ 
	$amount = $dollar * $british;
	printf("<p>$datestring, %.2f U.S. Dollars, British Pounds, %.2f</p>\n", $dollar, $amount);
	printf(FP "$datestring, %.2f U.S. Dollars, British Pounds, %.2f\n", $dollar, $amount);
} 
elsif($currency eq 'E' and $dollar > 0) 
{ 
	$amount = $dollar * $euros;
	printf("<p>$datestring, %.2f U.S. Dollars, Euros, %.2f</p>\n", $dollar, $amount);
	printf(FP "$datestring, %.2f U.S. Dollars, Euros, %.2f\n", $dollar, $amount);
}
elsif($currency eq 'M' and $dollar > 0) 
{ 
	$amount = $dollar * $mexican;
	printf("<p>$datestring, %.2f U.S. Dollars, Mexican Pesos, %.2f</p>\n", $dollar, $amount);
	printf(FP "$datestring, %.2f U.S. Dollars, Mexican Pesos, %.2f\n", $dollar, $amount);
}
elsif($currency eq 'C' and $dollar > 0) 
{ 
	$amount = $dollar * $canadian;
	printf("<p>$datestring, %.2f U.S. Dollars, Canadian dollars, %.2f</p>\n", $dollar, $amount);
	printf(FP "$datestring, %.2f U.S. Dollars, Canadian dollars, %.2f\n", $dollar, $amount);
}
else
{
	print "<p>Invalid choice! Please select a valid currency and dollar.</p>";
}

#display if user did not choose any currency or input <= 0 dollars
print	"<p>Do you want to exchange again (<a href=\"currencyCGI.html\">yes</a>
	/<a href=\"index.html\">no</a>)</p>";

#close exchanges.txt file and call end html function	
close(FP);
print end_html();

