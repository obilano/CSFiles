#!/usr/local/bin/ruby -w
=begin
Author:		Oberon Ilano
Assignment:	13
Class:		CS 410w
Due Date:	March 10, 2020
Description:	This program will compute the power of the base 
                and limit the result to less than a million.
=end

#\e[0m for normalizing the font and \e[4;1m for bold and underlining the font
print "\e[0mWhat is the base? \e[4;1m" 
base = gets.chomp.to_i

result = 0.0
number = 0

# loops until the result reaches >= million and the number loops is no more 
# than 21 because if the base is <= 1 then it will loop infinitely
while result < 1000000 && number < 21 do

    result = base ** number
    puts "\e[0m#{base} to the power #{number} is #{result}" if result < 1000000
    number += 1

end
