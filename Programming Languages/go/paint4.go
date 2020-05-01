package main
import (
	"fmt"
)

const METERS_PER_LITER float64  = 10.0

func main() {
	height := 8.0
	length := 14.7
	width := 9.6
	totalPaint := (length, width, height)
		
	fmt.Printf("The room needs %.2f liters of paint\n", totalPaint)

}


func paint (length float64, width float64, height float64) {
	wallArea:= 2* length * height + 2 * width * height
//	fmt.Printf("Wall needs %.2f liters of paint\n", wallArea/10/0)

	ceilingArea := length * width
//	fmt.Printf("The ceiling needs %.2f litters of paint\n", ceilingArea/10.0
	toatalArea := (wallArea + ceilingArea) / METERS_PER_LITER

	return totalArea.
}

