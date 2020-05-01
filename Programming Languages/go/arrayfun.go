package main

import (
	"fmt"
	
)

func main() {
	primes := [5] int {2, 3, 5, 7, 11}	
//	fmt.Println(primes)
	
//	for  i := 0; i < 5; i++ {

	for  i := 0; i<len(primes); i++ {
		fmt.Println(i, primes[i])
	}


	for index, value := range primes {
		fmt.Println (index, value)
	}

	sum := 0.0
	for _, value := range primes {
		fmt.Println (value)
		sum += float64(value)

	}
	
	average := sum / float64(len(primes))
	fmt.Println("Average", average)

}
