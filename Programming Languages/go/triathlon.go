/*	Programmer:		Oberon Ilano
	Class:			CS 410w
	Assignment:		5	
	Description:		The Triathlon problem with For loop
*/

package main

import ( 
	"fmt"
	"strings"
	"strconv"
	"bufio"
	"os"
	"log"
)

func main() {
	// number of athletes
	fmt.Printf("How many triathletes are there? ")
	reader := bufio.NewReader(os.Stdin)
	input, err := reader.ReadString('\n')
	if err != nil {
		log.Fatal(err)
	}

	input = strings.TrimSpace(input)
	// covert input to integer
	athletes, err := strconv.Atoi(input)
	if err != nil{
		log.Fatal(err)
	}

	for i := 0; i < athletes; i++ {
		// hours of cycling
		fmt.Printf("\nAthlete #%d:", i + 1)
		fmt.Printf("\nEnter cycling hours: ")
		reader = bufio.NewReader(os.Stdin)
		input, err = reader.ReadString('\n')
		if err != nil {
			log.Fatal(err)
		}

		input = strings.TrimSpace(input)
		// conver input to float
		cycHour, err := strconv.ParseFloat(input, 64)
		if err != nil{
			log.Fatal(err)
		}
	
		// hours of running
		fmt.Printf("Enter running hours: ")
		reader = bufio.NewReader(os.Stdin)
		input, err = reader.ReadString('\n')
		if err != nil {
			log.Fatal(err)
		}

		input = strings.TrimSpace(input)
		// conver input to float
		runHour, err := strconv.ParseFloat(input, 64)
		if err != nil {
			log.Fatal(err)
		}

		// hours of swimming
		fmt.Printf("Enter swimming hours: ")
		reader = bufio.NewReader(os.Stdin)
		input, err = reader.ReadString('\n')
		if err != nil {
			log.Fatal(err)
		}

		input = strings.TrimSpace(input)
		// conver input to float
		swimHour, err := strconv.ParseFloat(input, 64)
		if err != nil {
			log.Fatal(err)
		}
	
		// calculate total of calories and pound loss per 3500 calories
		TotalCalories := (cycHour * 200) + (runHour * 475) + (swimHour * 275)
		TotalPounds := TotalCalories / 3500

		fmt.Printf("Total calories: %v\n", TotalCalories)
		fmt.Printf("Pounds lost: %.2f\n", TotalPounds)

	}

}
