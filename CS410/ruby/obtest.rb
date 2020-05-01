#!/usr/local/bin/ruby -w
=begin
Author:		Oberon Ilano
Assignment:	14
Class:		CS 410w
Due Date:	March 16, 2020
Description:	This program will compute ticket price total of
                an event using object, classes, and inheritance.
                User will enter the information of an event that 
                will happen during the W. C. Handy music festival
                around the Shoals area.
=end
class Event
  attr_accessor :name, :location, :date, :time, :cost

  def display
    printf("\nEvent: %s\nLocation: %s\nDate: %s\nTime: %s\nCost: %s\n", name, location, date, time, cost)
  end
end

class Activities < Event
  def initialize(taxPercent)  
    @taxPercent = taxPercent
  end

  def tax 
    cost * @taxPercent / 100
  end

  def display
    printf("\nEvent: %s\nLocation: %s\nDate: %s\nTime: %s\nRegular Cost: $%.2f\n", name, location, date, time, cost)
  end

end

class Price < Activities
  def initialize(kid, adult)
    @kid = kid
    @adult = adult
  end

  def kidsprice
    tax +  (cost * @kid) / 2 
  end

  def adultsprice
    cost * @adult + tax
  end
end

puts "\t\t***TICKETS AVAILABLE***"

event = Event.new()
event.name = "W. C. Handy Music Festival"
event.location = "Northwest Shoals Alabama"
event.date = "July"
event.time = "Varies"
event.cost = "Varies"
event.display

movie = Event.new()
movie.name = "Movie Theater"
movie.location = "Huntsville, Alabama"
movie.date = "03/6/2020"
movie.time = "Varies"
movie.cost = "Varies"
movie.display

choice = 'Y'
while choice != 'N' do

  print "\nEnter the name of the event: "
  eventName = gets.chomp.to_s
  while (eventName == "")
    print "\nEnter the name of the event: "
    eventName = gets.chomp.to_s   
  end
  
  print "Enter the location or address: "
  eventLocation = gets.chomp.to_s
  while (eventLocation == "")
    print "Enter location or address: "
    eventLocation = gets.chomp.to_s
  end 
    
  print "Enter event's date (format does not matter): "
  eventDate = gets.chomp.to_s
  while (eventDate == "")
    print "Enter event's date (format does not matter): "
    eventDate = gets.chomp.to_s 
  end

  print "Enter event's time (format does not matter): "
  eventTime = gets.chomp.to_s
  while (eventTime == "")
    print "Enter event's time (format does not matter): "
    eventTime = gets.chomp.to_s 
  end

  print "Enter the cost of the event: $"
  eventCost = gets.chomp.to_f
  while (eventCost <= 0.00)
      print "Enter the cost equal or greater than 0: $"
      eventCost = gets.chomp.to_f     
  end

  print "Enter the tax percent: %"
  eventTax = gets.chomp.to_f
  while (eventTax <= 0.00)
      print "Enter the tax percent: %"
      eventTax= gets.chomp.to_f     
  end
    
  print "How many tickets for kids: "
  numKids = gets.chomp.to_i
  while (numKids <= 0)
    print "Enter positive number: "
    numKids = gets.chomp.to_i
  end 

  print "How many tickets for adults: "
  numAdults = gets.chomp.to_i
  while (numAdults <= 0)
    print "Enter positive number: "
    numAdults = gets.chomp.to_i
  end 

  musicEvent = Activities.new(eventTax)
  musicEvent.name = eventName
  musicEvent.location = eventLocation
  musicEvent.date = eventDate
  musicEvent.time = eventTime
  musicEventPrice = Price.new(numKids, numAdults)
  musicEvent.cost = eventCost
  musicEvent.display
  printf("\nTotal price is $%.2f for %d kid(s) and %d adult(s).\n", musicEventPrice.kidsprice + musicEventPrice.adultsprice, numKids, numAdults)
   
  print "Do you want to process another ticket for an event (Y|N)"
  choice = gets.chomp.upcase

  #check if response is one-character
  while choice.length != 1 || (choice != 'Y' && choice != 'N') do 
    print "\nDo you want to process another ticket for an event (Y|N)"
    choice = gets.chomp.upcase
  end

  puts "\nEnjoy the event!" if choice == 'N'
end #end of while loop

