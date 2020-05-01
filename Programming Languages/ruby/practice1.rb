#!/usr/local/bin/ruby -w

print "Enter a number: "
num = gets.to_i

puts "positve" if num > 0
puts "negative" if num < 0
puts "Zero" if num == 0 
puts "Divisible by 3" if num % 3 == 0
puts "Divisible by 5" if num % 5 == 0
puts "million" if num.between?(1000000, 2000000-1)
puts "equal to the 10th power" if num == 2**10
puts num.to_s.length

if num.to_s.length > 1
	puts num.to_s[1]
else
	puts "not a 2 digits long"
end

  
