package main

import (
	"fmt"
	"bufio"
	"log"
	"os"

)





func main () {
	file, err := os.Open("numbers.txt")
	if err != nil {
		log.Fatal(err)
	}

	scanner := bufio.NewScanner(file)
	for scanner.Scan() { // return false when if EOF
		fmt.Println(scanner.Text())
	}

	err = file.Close()
	if err != nil {
		log.Fatal(err)
	}

	if scanner.Err() != nil {
		log.Fatal(scanner.Err())
	}

}
