/*	Programmer:		Oberon Ilano
	Class:			CS 410w
	Assignment:		6	
	Due Date:		January 30, 2020
	Description:		The Triathlon problem
				The function checks if there is an
				error and if the input is not positive
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

//global constant variables
const CYCLING_CAL float64 = 200.0
const RUN_CAL float64 = 475.0
const SWIM_CAL float64 = 275.0
const CAL_PER_POUND float64 = 3500.0

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
		fmt.Printf("\nAthlete #%d: \n", i + 1)
		// first function call for cycling
		cycHour, err := triathlon ("Enter cycling hours: ") 
		if err != nil {
			log.Fatal(err)
		}

		// second function call for running
		runHour, err := triathlon ("Enter running hours: ")
		if err != nil {
			log.Fatal(err)
		}

		// third function call for swmming
		swimHour, err := triathlon ("Enter running hours: ")
		if err != nil {
			log.Fatal(err)
		}
	
		// calculate total of calories and pound loss per 3500 calories
		TotalCalories := (cycHour * CYCLING_CAL) + (runHour * RUN_CAL) + 
		(swimHour * SWIM_CAL)
		TotalPounds := TotalCalories / CAL_PER_POUND

		fmt.Printf("Total calories: %v\n", TotalCalories)
		fmt.Printf("Pounds lost: %.2f\n", TotalPounds)

	}

}


//******************************
// Function 
//******************************
//********************************************************
// Name: 	triathlon
// Purpose:  	convert string to float and validate 
//		the input number for hours
// Incoming: 	message (string)
// Outgoing: 	none
// Return:   	hour/0, nil (float64, error)
//*********************************************************

func triathlon (message string)(float64, error) { 
	
	fmt.Printf(message)	
	reader := bufio.NewReader(os.Stdin)
	input, err := reader.ReadString('\n')
	//check for error/return message if error has occur
	if err != nil {
		return 0, fmt.Errorf("Error with readString")
	}
	
	input = strings.TrimSpace(input)
	// convert input to float
	hour, err := strconv.ParseFloat(input, 64)
	//check for error/return message if error has occur
	if err != nil{
		return 0, fmt.Errorf("Error with ParseFloat")
	}

	//check if it is not positive
	if hour < 0 {
		return 0, fmt.Errorf("Invalid input: Hour(s) must be positive")
	} else {
		return hour, nil
	}

}
