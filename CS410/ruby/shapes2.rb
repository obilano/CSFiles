#!/usr/local/bin/ruby -w

class Shape
  attr_accessor :name, :color
end 

class Square < Shape
  def initialize(side)
      @side = side  # @side is an instance variable
                    # associated with a single square object
                    # can be acessed by any square mthod
  end 

  def area
    @side * @side
  end

  def perimeter 
    @side * 4
  end
end

myShape = Shape.new()
myShape.name = "Bob"
myShape.color = "Green"
puts myShape.name, myShape.color

mySquare = Square.new(13)
mySquare.name = "Jill"
mySquare.color = "Orange"
puts mySquare.perimeter, mySquare.area, mySquare.name, mySquare.color

