package main
import (
	"fmt"
	"log"
)

const METERS_PER_LITER float64  = 10.0

func main() {
//	height := 8.0
	length := 14.7
	width := 9.6
	
	height := -8.0

	wallPaint, ceilingPaint, err := paint (length, width, height)
	if err != nil {
		log.Fatal(err)
	} else {	
	fmt.Printf("The wall need %.2f liters of paint\n", wallPaint)

	fmt.Printf("The ceiling need %.2f liters of paint\n", ceilingPaint)
	}
}


func paint (length float64, width float64, height float64)(float64, float64, error) {
	if length <= 0 || width <= 0 || height <= 0	 {
		return 0, 0, fmt.Errorf("Invalid dimessiions. Must be positive")

	}

	wallPaint := (2* length * height + 2 * width * height) / METERS_PER_LITER
//	fmt.Printf("Wall needs %.2f liters of paint\n", wallArea/10/0)

	ceilingPaint := (length * width) / METERS_PER_LITER
//	fmt.Printf("The ceiling needs %.2f litters of paint\n", ceilingArea/10.0
//	toatalArea := (wallArea + ceilingArea) / METERS_PER_LITER

	return wallPaint, ceilingPaint, nil
}

