package main

import ("fmt")

func main(){

	var originalCount int
	var eatenCount int

	originalCount = 10
	eatenCount =  4

	fmt.Println("I started with", originalCount, "apples.\n")
	fmt.Println("Some jerk ate", eatenCount, "apples. \n")
	fmt.Println("There are", originalCount - eatenCount,  "apples left.\n")
}
