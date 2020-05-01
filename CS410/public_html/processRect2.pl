#!/usr/bin/perl
use CGI qw(:standard);

$length = param("length");
$width = param("width");
$choice = param("choice");

$datestring = localtime();
 
$area = $length * $width;

open(FP, ">>rectangles.txt");
print header("Rectangles Process");
start_html();
print "<body style=\"background-color: #B06374;\">\n";

print  "<h1>Rectangle Result</h2>\n";

if ($choice eq "A" and $width > 0 and $length > 0)
{
	$area = $length * $width;
	printf (FP "$datestring: Rectangle with length %.1f and width %.1f has area of %.1f\n", $length, $width, $area);
	printf ("<p>$datestring: Rectangle with length %.1f and width %.1f has area of %.1f</p>\n", $length, $width, $area);
}
elsif ($choice eq "P" and $width > 0 and $length > 0)
{
	$perimeter = 2*$length + 2*$width;
	printf(FP "$datestring: Rectangle with length %.1f and width %.1f has perimeter of %.1f\n", $length, $width, $perimeter);
	printf ("<p>$datestring: Rectangle with length %.1f and width %.1f has perimeter of %.1f</p>\n", $length, $width, $perimeter);
}
else
{
	print "Invalid width and length!\n";
}

print	"<p>Do you want to exchange again (<a href=\"rectform.html\">yes</a>
	/<a href=\"index.html\">no</a>)</p>";

close(FP);

print end_html();
