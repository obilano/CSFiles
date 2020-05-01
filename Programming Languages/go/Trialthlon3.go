package main

import ( 
	"fmt"
	"strings"
	"strconv"
	"bufio"
	"os"
	"log"
)

const CYCLING float64 = 200.0
const RUNNING float64 = 475.0
const SWIMMING float64 = 275.0
const PER_POUND float64 = 3500.0

func main() {
	fmt.Printf("How many triathletes are there? ")
	reader := bufio.NewReader(os.Stdin)
	input, err := reader.ReadString('\n')
	if err != nil {
		log.Fatal(err)
	}

	input = strings.TrimSpace(input)
	// coverting the input to integer
	count, err := strconv.Atoi(input)
	if err != nil{
		log.Fatal(err)
	}	

	for i := 1; i < count; i++ {
		fmt.Printf("\nAthlete #%d:", i)
		fmt.Printf("\nEnter cycling hours: ")

		cyclingTime, err := triathlon ("Enter cycling hour: ") 
		if err != nil {
			log.Fatal(err)
		}

		fmt.Printf("Enter running hours: ")
		runningTime, err := triathlon ("Enter running hour: ")
		if err != nil {
			log.Fatal(err)
		}

		fmt.Printf("Enter swimming hours: ")
		swimmingTime, err := triathlon ("Enter swimming hour: ")
		if err != nil {
			log.Fatal(err)
		}
	
		calories := (cyclingTime * CYCLING) + (runningTime * RUNNING) + 
		(swimmingTime * SWIMMING)
		pounds := calories / PER_POUND

		fmt.Printf("Total calories: %v\n", calories)
		fmt.Printf("Pounds lost: %.2f\n", pounds)

	}

}

func triathlon (input string, )(float64, error) { //without parameter also work
	
	reader := bufio.NewReader(os.Stdin)
	input, err := reader.ReadString('\n')
	//check for error/return message if error has occur
	if err != nil {
		log.Fatal(err)
		return 0, fmt.Errorf("Error with readString")
	}
	
	input = strings.TrimSpace(input)
	// convert input to float
	time, err := strconv.ParseFloat(input, 64)
	//check for error/return message if error has occur
	if err != nil{
		log.Fatal(err)
		return 0, fmt.Errorf("Error with ParseFloat")
	}

	//check if it is not positive
	if time < 0 {
		return 0, fmt.Errorf("Invalid input: Hour(s) must be positive")
	} else {
		return time, nil
	}

}

