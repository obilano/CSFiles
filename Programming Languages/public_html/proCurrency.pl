#!/usr/bin/perl

print "Content-Type: Text/html\n\n";

$str = $ENV{QUERY_STRING};

($s1, $s2) = split(/&/, $str);
($trash, $dollar) = split(/=/, $s1);
($trash, $currency) = split(/=/, $s2);
	
print "<!DOCTYPE html>\n";
print "<html lang=\"en\">\n";
print "<head>\n";
print "<meta charset=\"UTF-8\">\n";
print   "<title>Processing Currency</title>\n";
print  "</head>\n";
print  "<body style=\"background-color: #BC8F8F;\">\n";
print     "<h1>Converting USD</h1>\n";

$amount = $dollar;
if($currency eq 'P') 
{ 
	$amount = $dollar * 0.77;
	#$currency = "British Pounds";
	printf("<p>%.2f U.S. Dollars to %.2f British Pounds<p>\n", $dollar, $amount);
} 
elsif($currency eq 'E') 
{ 
	$amount = $dollar * 0.92;
	#$currency = "Euros";
	printf("<p>%.2f U.S. Dollars to %.2f Euros <p>\n", $dollar, $amount);
}
elsif($currency eq 'M') 
{ 
	$amount = $dollar * 18.67;
	#$currency = "Mexican Pesos";
	printf("<p>%.2f U.S. Dollars to %.2f Mexican pesos <p>\n", $dollar, $amount);
}
elsif($currency eq 'C') 
{ 
	$amount = $dollar * 1.33;
	#$currency = "Canadian dollars";
	printf("<p>%.2f U.S. Dollars to %.2f Canadian dollars <p>\n", $dollar, $amount);
}
else
{
	print "<p>Invalid choice! Please select a valid currency.<p>";
}


print	"<p>Do you want to exchange again (<a href=\"currency.html\">yes</a>
	/<a href=\"index.html\">no</a>)<p>";

	print  "</body>\n";
print "</html>\n";
