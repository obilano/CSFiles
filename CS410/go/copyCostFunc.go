/*	Programmer:		Oberon Ilano
	Class:			CS 410w
	Assignment:		6
	Due Date:		January 30, 2020
	Description:		The Copy Cost problem with For Loop
				The function will calculate the price
				of the copies. 1 parameter and 1 
				return value.
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

// global constant variables
const FIRST_HUNDRED  int = 100
const HUNDRED_COPY_COST float64 = 0.05
const ADD_COPY_COST float64 = 0.03

func main() {
	for Yes := 1; Yes > 0; {
		// customer's name
		fmt.Printf("Enter customer name: ")
		reader := bufio.NewReader(os.Stdin)
		input, err := reader.ReadString('\n')
		if err != nil {
			log.Fatal(err)
		}
		name := strings.TrimSpace(input)

		// number of copies
		fmt.Print("Enter number of copies: ")
		reader = bufio.NewReader(os.Stdin)
		input, err = reader.ReadString('\n')
		if err != nil {
			log.Fatal(err)
		}

		input = strings.TrimSpace(input)
		count, err := strconv.Atoi(input) 
		if err != nil {
			log.Fatal(err)
		}
	
		// calculate the price
		totalCost := cost(count)
		
		// display result
		fmt.Printf("Customer name: %s\n", name) 
		fmt.Printf("Total cost: $%0.2f\n", totalCost)
		
		fmt.Print("\nAnother customer (Y/N)? ")
		reader = bufio.NewReader(os.Stdin)
		choice, err := reader.ReadString('\n')
		if err != nil {
			log.Fatal(err)	
		}

		choice = strings.TrimSpace(choice)

		if choice == "Y" || choice == "y" {
			Yes++
		} else {
			Yes = 0 // end for loop
		}
		fmt.Printf("\n")

	}	
}


//******************************
// Function 
//******************************
//*********************************************************
// Name: 	cost
// Purpose:  	calculate the calories lost
// Incoming: 	count (int)
// Outgoing: 	none
// Return:   	totalCost (float64)
//*********************************************************
func cost (count int)(float64) {
	var totalCost float64
	if count  > FIRST_HUNDRED {
		addOn := (count - FIRST_HUNDRED) 
		totalCost = (float64(addOn) * ADD_COPY_COST) + 
		float64(FIRST_HUNDRED) * HUNDRED_COPY_COST
	} else {
		totalCost = float64(count) * HUNDRED_COPY_COST
	}
	return totalCost
}
