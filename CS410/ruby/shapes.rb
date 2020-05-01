#!/usr/local/bin/ruby -w

def perimSquare(side)
  side * 4
end

def areaSquare(side)
  side * side
end

def perimTriangle(side1, side2, side3)
  side1 + side2 + side3
end

def areaTriangle(base, height)
  base * height / 2
end

puts perimSquare(7)
puts areaSquare(7)
puts perimTriangle(6, 7, 8)
puts areaTriangle(5.2, 9.2)


