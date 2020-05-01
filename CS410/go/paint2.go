package main
import (
	"fmt"
)

func main() {
	height := 8.0
	length := 14.7
	width := 9.6
	paint:= (length, width, height)
		

}


func paint (length float64, width float64, height float64) {
	wallArea:= 2* length * height + 2 * width * height
	fmt.Printf("Wall needs %.2f liters of paint\n", wallArea/10/0)

	ceilingArea := length * width
	fmt.Printf("The ceiling needs %.2f litters of paint\n", ceilingArea/10.0

})
