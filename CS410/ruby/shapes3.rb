#!/usr/local/bin/ruby -w


class Square
  def initialize
    if defined?(@@numSqures)
      @@numSquares += 1
    else 
      @@numSquares = 1
    end
  end
  def self.count
    @@numSquares
  end

end 


a = Square.new()
b = Square.new()

puts Square.count

