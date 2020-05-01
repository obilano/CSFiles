#!/usr/bin/perl

print "Content-Type: Text/html\n\n";

$str = $ENV{QUERY_STRING};

($s1, $s2) = split(/&/, $str);
($trash, $length) = split(/=/, $s1);
($trash, $width) = split(/=/, $s2);

$area = $length * $width;

print "<!DOCTYPE html>\n";
print "<html lang=\"en\">\n";
print "<head>\n";
print "<meta charset=\"UTF-8\">\n";
print   "<title>Processing Rectangles</title>\n";
print  "</head>\n";
print  "<body>\n";
print     "<h1>Computing Rectangle Area</h1>\n";

printf("<p>Rectangle with length %.1f and width %.1f has area of %.1f</p>\n", 
	$length, $width, $area);


open(FP, ">>rectangles.txt");



print  "</body>\n";
print "</html>\n";
