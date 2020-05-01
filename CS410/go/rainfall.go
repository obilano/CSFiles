/*	programmer:		oberon ilano
	class:			cs 410w
	assignment:		7	
	due date:		february 4, 2020
	description:		read the data from file, print table 
				for months and rainfall. calculate 
				the average rainfall and find the min/max.
*/

package main

import (
	"fmt"
	"strconv"
	"os"
	"log"
	"bufio"
)

/*** MAIN DRIVER ***/

func main () {
	months := [] string {"January", "February", "March", "April",
			"May", "June", "July", "August", "September",
			"October", "November", "December"}

	// read data from file
	inches, err := readData()
	if err != nil {
		log.Fatal(err)
	}
	
	// show table
	table (inches, months)	

	// calculate
	min, max, avg := compute (inches)
	
	// display the average rainfall, months and value of min, max
	fmt.Printf("\nThe minimum in %s is %.1f\n", months[min] , inches[min]) 
	fmt.Printf("The maximum in %s is %.1f\n", months[max], inches[max])
	fmt.Printf("The average is %.1f\n", avg)
		
}


/*** FUNCTIONS ***/

//********************************************************
// name: 	readdata
// purpose:  	get data from file, convert data to float
// incoming: 	none
// outgoing: 	none
// return:   	inches/data (float), nil/error (error)
//*********************************************************
func readData()([]float64, error) {
	var inches [] float64
	var input []string
	//open file
	file, err := os.Open("rainfall.txt")
	if err != nil {		//1 checking opening the file
		return nil, fmt.Errorf("Error: Unable to open file!")
	}

	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
		input = append(input, scanner.Text())
	}
	
	// convert to float then store to inches
	for _, i := range input {
		x, err := strconv.ParseFloat(i, 64)
		if err != nil {		//2 checking parsing to float
			return nil, fmt.Errorf("Error with string convert!")
		}
		inches = append(inches, x)
	}
	
	if len(inches) != 12 {		//3 check for number of data files
		return nil , fmt.Errorf("Error: wrong number of data items in file!")
	}

	err = file.Close()
	if err != nil {		//4 checking for closing file
		return nil, fmt.Errorf("Error: Unable to close file!")
	}

	if scanner.Err() != nil { 	//5 check for scanner error
		return nil, fmt.Errorf("Error: Scanner error!")
	}

	return inches, nil 
}

//********************************************************
// Name: 	table
// Purpose:  	print table of months and rainfall
// Incoming: 	inches (float64), months (string)
// Outgoing: 	none
// Return:   	none
//*********************************************************
func table (inches []float64, months []string){
	
	fmt.Println("|Months \t| Rainfall|")
	fmt.Println("|---------------|---------|")
	for i := 0; i <len(inches); i++ {
		fmt.Printf("|%-9s\t", months[i])
		fmt.Printf("|%9.1f|\n", inches[i])
	}
	fmt.Println("|_______________|_________|")
}

//********************************************************
// Name: 	compute
// Purpose:  	calculate the average rainfall and find
//		the min/max of rainfall
// Incoming: 	inches (float64)
// Outgoing: 	none
// Return:   	minIndex (int), maxIndex (int), 
//		average (float64)
//*********************************************************
func compute (inches []float64)(int, int, float64) {
	
	sum := 0.0
	min := inches[0]
	max := inches[0]
	smallIndex := 0
	largeIndex := 0
	
	for i := range inches {
		sum += inches[i]

		// find min index
		if min > inches[i]  {
			min = inches[i]	
			smallIndex = i
		}

		// find max index
		if max < inches[i] {
			max = inches[i]
			largeIndex = i
		}
	}
	// calculate average
	average := sum / float64(len(inches))

	return smallIndex, largeIndex, average
	
}

