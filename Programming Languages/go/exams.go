package main 

import (
	"bufio"
	"fmt"
	"os"
	"log"
	"strings"
	"strconv"
)

func main () {
	fmt.Print("Enter exam score: ")
	reader := bufio.NewReader(os.Stdin)
//	input, _ := reader.ReadString('\n')
	input, err := reader.ReadString('\n')
	if err != nil {
		log.Fatal(err)
	}

	input = strings.TrimSpace(input)
	score, err := strconv.ParseFloat(input,64)
	
	if err != nil {
		log.Fatal(err)
	}
	var status string
	if score >= 70 {
		status = "Pass"
	} else {
		status = "Fail"
	}

	fmt.Println("Score of", score, "will earn a grade of", status)
}
