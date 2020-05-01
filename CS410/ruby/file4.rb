#!/usr/local/bin/ruby -w
require 'pstore'

class Student
  attr_accessor :name, :major, :gender, :age
end


mickey = Student.new
mickey.name = "Mickey Mouse"
mickey.major = "CS"
mickey.gender = "Male"
mickey.age = 98

donald = Student.new
donald.name = "Donald Duck"
donald.major = "Math"
donald.gender = "Male"
donald.age = 80

store = PStore.new("testfile")

store.transaction do #transaction: set of things we want to occur/not to occur in one instance, 
                     #good in concurrency, exclusive access to the store
  store[:people] ||= Array.new
  store[:people] << mickey
  store[:people] << donald
end




