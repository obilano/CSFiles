/*	Programmer:		Oberon Ilano
	Class:			CS 410w
	Assignment:		5
	Description:		The Copy Cost problem with For Loop
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
	var totalCost float64
	
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
		count, err := strconv.ParseFloat(input, 64)
		if err != nil {
			log.Fatal(err)
		}
	
		// calculate the price
		if count > 100 {
			addOn := count  - 100
			totalCost = (addOn * 0.03) + 100 * 0.05
		} else {
			totalCost = count * 0.05
		}
		
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
