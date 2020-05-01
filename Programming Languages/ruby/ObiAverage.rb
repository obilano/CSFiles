#!/usr/local/bin/ruby -w
=begin
Author:		Oberon Ilano
Assignment:	13
Class:		CS 410w
Due Date:	March 10, 2020
Description:	This program will compute the average of n number
=end

#\e[4;1m for underline and bold the font and \e[0m to normalize the font
print "\e[0mHow many scores? \e[4;1m"
count = gets.chomp.to_i
sum = 0.00

#loop for how many number of scores
1.upto(count) do |number|
  
  print "\e[0mEnter score ##{number}: \e[4;1m"
  sum += gets.chomp.to_f 
  
end #end of the loop
printf("\e[0mAverage is %0.1f\n", sum / count )


