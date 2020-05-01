package main
import (
	"fmt"
)

const METERS_PER_LITER float64  = 10.0

func main() {
	height := 8.0
	length := 14.7
	width := 9.6
	
	wallPaint, ceilingPaint := (length, width, height)
		
	fmt.Printf("The wall need %.2f liters of paint\n", wallPaint)

	fmt.Printf("The ceiling need %.2f liters of paint\n", ceilingPaint)
}


func paint (length float64, width float64, height float64)(float64, float64) {
	wallPaint := (2* length * height + 2 * width * height) / METER_PER_LITER
//	fmt.Printf("Wall needs %.2f liters of paint\n", wallArea/10/0)

	ceilingPaint := (length * width) / METER_PER_LITER
//	fmt.Printf("The ceiling needs %.2f litters of paint\n", ceilingArea/10.0
//	toatalArea := (wallArea + ceilingArea) / METERS_PER_LITER

	return wallPaint, ceilingPaint
}

