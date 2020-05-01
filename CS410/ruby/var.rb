#!/usr/local/bin/ruby -w

def test
  w = 10
  puts w
end

#puts w this causes error - outside of scope

def test2
  puts $t
end

$t = 20 #global variable
test2


