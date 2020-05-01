/*  Programmer:     Oberon Ilano
    Class:          CS 410w
    Assignment:     8
    Due date:       February 9, 2020
    Description:    Ask user for vehicle information,
                    add, search, and print vehicles using
                    switch statements.
*/

package main

import (
    "fmt"
    "log"
    "os"
    "bufio"
    "strings"
)

/*** MAIN DRIVER ***/

func main() {
  var vehicle = map[string]string {} 
  
  for flag := true; flag; {
    //display menu
    menu()
    // read input from user, trim and convert to Uppercase
    input, err := readInput("")
    if err != nil {
        log.Fatal(err)
    }
    // string to  character/rune then store it to choice
    r := []rune(input)
    choice := r[0]

    // swtich statement
    switch choice {
        case 'A': vehicle, err = addVehicle(vehicle)
            if err != nil {
                log.Fatal(err)
            }
        case 'S': vehicle, err = search(vehicle)
            if err != nil {
                log.Fatal(err)
            }
        case 'P': table(vehicle)
        case 'Q': fmt.Println("\nGoodbye! ")
                flag = false;
        default: fmt.Println("\nEnter a valid choice!\n\n")
      
    }
  }
}

/*** FUNCTIONS ***/

//********************************************************
// name:     menu
// purpose:  display option to the user
// incoming: none
// outgoing: menu option (rune)
// return:   none
//*********************************************************
func menu () {
    fmt.Println("\t\tMAIN MENU")
    fmt.Println("A - Add a new vehicle registration")
    fmt.Println("S - Search for a vehicle registration")
    fmt.Println("P - Print all vehicles")
    fmt.Println("Q - Quit the program")
    fmt.Print("Enter your choice: ")

}

//********************************************************
// name:     readInput
// purpose:  get data from keyboard, read, trim, and
//           convert strings to uppercase
// incoming: message (string)
// outgoing: none
// return:   input (string), nil/error (error)
//*********************************************************
func readInput (message string)(string, error){
    fmt.Printf(message)
    reader := bufio.NewReader(os.Stdin)
    input, err := reader.ReadString('\n')
    if err != nil {
        return message, fmt.Errorf("Reader error!")
    }
    // trim then convert to uppercase
    input = strings.TrimSpace(input)
    input = strings.ToUpper(input)
    
    return input, nil

}

//********************************************************
// name:     addVehicle
// purpose:  add new vehicle to the map if has not been
//           added yet
//incoming:  vehicle map with subscript of string and 
//           value of string
//outgoing:  none
// return:   vehicle map, nil/error (error)
//*********************************************************
func addVehicle (vehicle map[string]string)(map[string]string, error){
    var key string
    // get license plate info  & call readInput function
    license, err := readInput("Enter a license plate: ")
    if err != nil {
        return nil, fmt.Errorf("Error with license plate read input!")
    }
    
    if _, ok := vehicle[license]; ok { 
    fmt.Println("\nLicense plate has already been entered!")
    fmt.Printf("\t%s\n\n", vehicle[license])    
    //continue
    } else {     
        key = license
    
    // get user's first name  & call readInput function
    fname, err := readInput("Enter first name: ")
    if err != nil {
        return nil, fmt.Errorf("Error with first name read input!")
    }
    
    // get user's last name  & call readInput function
    lname, err := readInput("Enter last name: ")
    if err != nil {
        return nil, fmt.Errorf("Error with last name read input!")
    }
    
    // get user's phone number & call readInput function
    pnumber, err := readInput("Enter phone number: ") 
    if err != nil {
        return nil, fmt.Errorf("Error with phone number read input!")
    }
    
    // use Spintf
    vehicle[key] = fmt.Sprintf("%s, %s, %s", fname, lname, pnumber) 
    
    // display 
    fmt.Printf("\n\t%s\n\n", vehicle[key])
    }
    
    return vehicle, err

}

//********************************************************
// name:     search
// purpose:  search if a vehicle infomation exist
//incoming:  vehicle map with subscript of string and 
//           value of string
//outgoing:  none
// return:   vehicle (map), nil/error (error)
//*********************************************************
func search(vehicle map[string]string)(map[string]string, error){
    var fname, lname, pnumber string
    // call readInput function
    license, err := readInput("Enter a license plate to search: ")
    if err != nil {
        return nil, fmt.Errorf("Error with license plate search!")
    }
    
    // split first name, last name and phone number if it's already exist
    if _, ok := vehicle[license]; ok { 
        vecInfo := strings.Split(vehicle[license], ", ")
    for i := 0; i < 3; i++ {      
        fname = vecInfo[0]
        lname = vecInfo[1]
        pnumber = vecInfo[2]  
    }
    fmt.Printf("\n%s\n%s\n%s\n\n", fname, lname, pnumber) 
    } else { 
        fmt.Println("\nThe license plate number does not exist!\n\n")
    }
    
    return vehicle, err
}

//********************************************************
// Name:     table
// Purpose:  print table of information of  all the 
//           vehicles
// Incoming: vehicle map with subscript of string and 
//           value of string
// Outgoing: none
// Return:   none
//*********************************************************
func table(vehicle map[string]string) {
    
    var fname, lname, pnumber string
    // headers
    var col1 string = "LICENSE"
    var col2 string = "FIRST NAME"
    var col3 string = "LAST NAME"
    var col4 string = "PHONE NUMBER"
    
    // split first name, last name and phone number of all vehicles then print 
    fmt.Printf("\n|%-10s \t|%-15s \t|%-15s \t|%-10s \t|\n", col1, col2, col3, col4)
    fmt.Println("|---------------|-------------------|-------------------|---------------|")
    for key, vecInfo := range vehicle {
        split := strings.Split(vecInfo, ", ")
        for i := 0; i < 3; i++ {
            fname = split[0]
            lname = split[1]
            pnumber = split[2]
        }
        fmt.Printf("|%-10s \t|%-15s \t|%-15s \t|%-10s \t|\n", key, fname, lname, pnumber) 
    }
    fmt.Println("|---------------|-------------------|-------------------|---------------|\n")

}

