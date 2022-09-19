/*
Developer: @skywalkerSam
Purpose: "Hello World" program in The GO Programming Language...
Date: 12022.09.19.19:27:00
*/
package main

import "fmt"

func main() {
	fmt.Println("Hello World :)")
	fmt.Print("Hello World...")
	fmt.Print("\t Hello World... \n")

	// Variable assignment...
	var userName = "Starboy" // Dynamic variables
	var userHome string = "Earth"
	userSystem := "Solar System"
	const systemPlanets = 8 // Constant variables
	const systemSuns int8 = 1
	fmt.Printf("Hello %v, This is %v. Third planet of the %v :)\n", userName, userHome, userSystem) // Variable assignment in output
	fmt.Printf("\t System Planets: %v, System Suns: %v \n", systemPlanets, systemSuns)
	fmt.Printf("\t Data Type: '%T' &, Data Type: '%T' \n", userHome, systemPlanets)

	// User Input System
	var firstName string
	var accessPin int
	print("\n Enter Your First Name: ") // What on earth is happening here!
	fmt.Scan(&firstName)                // Pointers just point the value to the right memory location
	print("\n Enter Your Access Pin: ")
	fmt.Scan(&accessPin)
	fmt.Printf("\n\t Welcome %v, Pin: '%v' accepted...\n", firstName, accessPin)

}
