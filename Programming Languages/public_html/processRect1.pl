#!/usr/bin/perl
use CGI qw(:standard);

$length = param("length");
$width = param("width");
$choice = param("choice");

$datestring = localtime();
 
print "Content-Type: Text/html\n\n";

$str = $ENV{QUERY_STRING};

#($s1, $s2) = split(/&/,$str);
#($dummy, $length) = split(/=/,$s1);
#($dummy, $width) = split(/=/,$s2);
#($dummy, $choice) = split(/=/, $s3);

$area = $length * $width;

open(FP, ">>rectangles.txt");

print "<!DOCTYPE html>\n";
print "<html lang =  \"en\">\n";

print "<head>\n";
print "<meta charset=\"UTF-8\">\n";
print "<title>Process Rectangle</title>\n";
print "</head>\n";

print "<body>\n";
print  "<h1>Obi's Web page</h2>\n";

$choice = <STDIN>;

chomp($choice);

if ($choice eq "A")
{
	$area = $length * $width;
	printf (FP "%c: Rectangle with length %.1f and 
		width %.1f has area of %.1f\n", $length,$width,$area);
}
else
{
	$perimeter = 2*$length + 2*$width;
	printf(FP "$datestring: Rectangle with length %.1f and 
		width %.1f has perimeter of %.1f\n", $length,$width,$perimeter);
}

close(FP);

print end_html();
#print "</body>\n";
#print "</html>\n";
