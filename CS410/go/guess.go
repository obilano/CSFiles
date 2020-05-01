package main

import (
	"fmt"
	"bufio"
	"log"
	"math/rand"
	"os"
	"strconv"
	"strings"
	"time"
)

func main () {
	
	target := rand.Intn(100) + 1
	fmt.Println("Guess a random number between 1 and 100")

	reader := bufio.NewReader(os.Stdin)
	for guesses := 0; guesses < 10; guesses++ {
		fmt.Print("Guess: ")
		input, err := reader.ReadString('\n')
		if err != nil {
			log.Fatal(err)
		}

		input = strings.TrimSpace(input)
		guess, err := strconv.Atoi(input)
		if err != nil {
			log.Fatal(err)
		}

		if guess < target {
			fmt.Println("Your guess is too low")
		} else if guess > target {
			fmt.Println("Your guess is too high")
		} else {
			fmt.Println("Your guess is correct!")
		}

	}
	
}
