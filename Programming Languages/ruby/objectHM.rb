#!/usr/local/bin/ruby -w
=begin
Author:		Oberon Ilano
Assignment:	14
Class:		CS 410w
Due Date:	March 16, 2020
Description:	This program will calculate the total price of tickets
                an event using an object, classes, inheritance, and all
                the information of an event that the user will input.
                After data is collected and calculated then purchased
                transaction will be stored into a file.
=end

require 'pstore'

class Event
  attr_accessor :name, :location, :date, :time, :cost

  def display
    printf("\nEvent: %s\nLocation: %s\nDate: %s\nTime: %s\nCost: $%s\n",
           name, location, date, time, cost)
  end
end

#Subclass of Event Class
class Activity < Event

  def display
      printf("\nActivity: %s\nLocation: %s\nDate: %s\nTime: %s\nKids Cost: $%.2f\nAdults Cost: $%.2f\n",
             name, location, date, time, cost / 2, cost)
  end
end

#Subclass of Event Class that compute ticket prices
class Price < Event
  def initialize(kid, adult)
    @kid = kid
    @adult = adult
  end
    def tax
    cost * 0.08
  end

  def kidsPrice
    if (@kid > 0)
      (tax / 2) + (cost * @kid) / 2
    else
      0
    end
  end

  def adultsPrice
    if (@adult > 0)
      tax + cost * @adult
    else
      0
    end
  end

  def printGrandTotal
    printf("Grand Total: $%.2f\n", kidsPrice + adultsPrice)
  end
end



puts "\t***TICKETS AVAILABLE****"
puts "\t**Tickets Example Below**"

#Using the Event Class for an example to show to the users
musicEvent = Event.new()
musicEvent.name = "W. C. Handy Music Festival"
musicEvent.location = "Northwest Shoals Alabama"
musicEvent.date = "July"
musicEvent.time = "Varies"
musicEvent.cost = "Varies"
musicEvent.display

#Using the Activity Class for an example to show to the users
toDo = Activity.new()
toDo.name = "Movie"
toDo.location = "Huntsville, Alabama"
toDo.date = "03/21/2020"
toDo.time = "4:00 pm"
toDo.cost = 7.00
toDo.display

puts "**********************************"

choice = 'Y'
while choice != 'N' do
  #Ask user for the input data
  print "\nEnter event's name: "
  eventName = gets.chomp.to_s
  while (eventName == "")
    print "\nEnter event's name: "
    eventName = gets.chomp.to_s
  end

  print "Enter event's location or address: "
  eventLocation = gets.chomp.to_s
  while (eventLocation == "")
    print "Enter event's location or address: "
    eventLocation = gets.chomp.to_s
  end

  print "Enter event's date (any format): "
  eventDate = gets.chomp.to_s
  while (eventDate == "")
    print "Enter event's date (any format): "
    eventDate = gets.chomp.to_s
  end

  print "Enter event's time (any format): "
  eventTime = gets.chomp.to_s
  while (eventTime == "")
    print "Enter event's time (any format): "
    eventTime = gets.chomp.to_s
  end

  print "Enter regular cost: $"
  eventCost = gets.chomp.to_f
  while (eventCost < 0.00)
      print "Enter cost equal or greater than 0: $"
      eventCost = gets.chomp.to_f
  end

  print "How many kids: "
  numKids = gets.chomp.to_i
  while (numKids < 0)
    print "Enter positive number: "
    numKids = gets.chomp.to_i
  end

  print "How many adults: "
  numAdult = gets.chomp.to_i
  while (numAdult < 0)
    print "Enter positive number: "
    numAdult = gets.chomp.to_i
  end

  #create an activity class to collect data and display it
  event = Activity.new()
  event.name = eventName
  event.location = eventLocation
  event.date = eventDate
  event.time = eventTime
  event.cost = eventCost

  #create a Price class to compute the ticket prices for an event/activity
  price = Price.new(numKids, numAdult)
  price.cost = eventCost

  event.display
  printf("\nTotal for %d kid(s): $%.2f\nTotal for %d adult(s): $%.2f\n",
         numKids, price.kidsPrice, numAdult, price.adultsPrice)
  price.printGrandTotal
  puts "**********************************\n"

  #store purchased transaction
  store = PStore.new("paymTransacFile")
  store.transaction do
    store[:purchased] ||= Array.new
    store[:purchased] << event
    store[:purchased] << price
  end

  print "Do you want to process another ticket for an event (Y|N)"
  choice = gets.chomp.upcase

  #check if response is one-character
  while choice.length != 1 || (choice != 'Y' && choice != 'N') do
    print "\nDo you want to process another ticket for an event (Y|N)"
    choice = gets.chomp.upcase
  end

  puts "\nEnjoy the event!" if choice == 'N'
end #end of while loop
