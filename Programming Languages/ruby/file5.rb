#!/usr/local/bin/ruby -w
require 'pstore'

class Student
  attr_accessor :name, :major, :gender, :age
end

store = PStore.new("testfile")
people = []
store.transaction do #transaction: set of things we want to occur/not to occur in one instance, 
                     #good in concurrency, exclusive access to the store
  people = store[:people]
end

people.each do |person|
  puts person.name
  puts person.major
  puts person.gender
  puts person.age
  puts
end




