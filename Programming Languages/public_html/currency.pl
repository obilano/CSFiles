#Programmer:	Oberon Ilano
#Assignment:	9
#Class:		CS 410w
#Due Date:	02/13/2020
#Description:	USD to Pounds, Euro, CD, or Pesos. User will 
#		input the amount of dollars and will choice
#		which currency to be converted to.	

#!/usr/vim/perl
use Term::ANSIColor;

do
{
	print color 'reset';  #all print color 'reset' should reset the text attribute to default
	print "\nConvert your U.S. Dollars to foreign currency\n";
       	print "\nHow many U.S. Dollars do you want to exchange? ", color('bold underline'); # bold underline the input from user
	$dollar = <STDIN>;
	chomp($dollar);

	print color 'reset';
	# user choose which currency
	print "Enter P (British Pounds), E (Euros), M (Mexican Pesos), or C (Canadian): ", color('bold underline');
	$currency = <STDIN>;
	chomp($currency);

	print color 'reset';
	#calculate and display total amount of currency rates
	if($currency eq 'P') 
	{ 
		printf("Your converted amount is %.2f British Pounds\n", $dollar * 0.77);
	} 
	elsif($currency eq 'E') 	
	{ 
		printf("Your converted amount is %.2f Euros\n", $dollar * 0.92);
	}
	elsif($currency eq 'M') 
	{ 
		printf("Your converted amount is %.2f Mexican Pesos\n", $dollar * 18.67);
	}
	elsif($currency eq 'C') 
	{ 
		printf("Your converted amount is %.2f Canadian dollars\n", $dollar * 1.33);
	}
	else	
	{ 	#prompt message for invalid currency
		print "\nInvalid choice! Enter a valid currency!\n";
	}

	print "\nDo you want to exchange again (yes/no)? ", color('bold underline');
	$again = <STDIN>;
	chomp($again);
}while($again eq "yes");

print color 'reset';
print "\nThank you for your business\n";
