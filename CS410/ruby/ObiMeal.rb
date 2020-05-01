#!/usr/local/bin/ruby -w
=begin
Author:		Oberon Ilano
Assignment:	13
Class:		CS 410w
Due Date:	March 10, 2020
Description:	This program will compute meal price total including
                the tips of 10%, 15%, and 20%.
=end

choice = 'Y'
while choice != 'N' do 
  print "Enter the price: "
  price = gets.chomp.to_f
  
  if (price > -1)
    #calculate tips
    tip10 = price * 0.10
    tip15 = price * 0.15
    tip20 = price * 0.20
    #display and calculate total amount with tips
    printf("10%% tip: $%0.2f\n", tip10)
    printf("Total with 10%% tip: $%.2f\n", tip10 + price)
    printf("15%% tip: $%0.2f\n", tip15)
    printf("Total with 15%% tip: $%.2f\n", tip15 + price)
    printf("20%% tip: $%0.2f\n", tip20)
    printf("Total with 20%% tip: $%.2f\n", tip20 + price)
  
  else #display message to user if price is negative
    puts "Enter price greater than 0.00"
  end #end of if else statement
  
  print "Do you want to continue (Y or N)"
  choice = gets.chomp.upcase
  
  #check if response is one-character
  while choice.length != 1 || (choice != 'Y' && choice != 'N') do 
     print "Do you want to continue (Y or N)"
     choice = gets.chomp.upcase
  end

  puts "Have a nice day" if choice == 'N'
end #end of while loop


