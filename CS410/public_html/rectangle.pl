# Program to do computations with rectangles
# It will ask the user to input the length and width,
# and then ask if area or perimeter should be displayed
# Written by Mark Terwilliger
# CS 410W
# February 11, 2020

#!/usr/bin/perl
print "Rectangle world\n\n";

print "Enter length: ";
$length = <STDIN>;
chomp($length);


print "Enter width: ";
$width= <STDIN>;
chomp($width);

print "Area (A) or Perimeter (P)? ";
$choice= <STDIN>;
chomp($choice);

if ($choice eq "A")
{
	$area = $length * $width;
	printf("The area is %.2f\n", $area);
}
else
{
	$perimeter = 2*$length + 2*$width;
	printf("The perimeter is %.2f\n", $perimeter);
}
