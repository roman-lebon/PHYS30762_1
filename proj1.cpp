// proj1.cpp
// Program testing compilation and input/output using The Bohr Model
// PHYS30762 Assignment 1
// Roman le Bon - 11423027

// We include the standard input/output library
#include <iostream>

// We always include a main function at program startup
int main() {
  // Declare variables - no initialisation as user(s) will input values
  int Z; // atomic number (integer)
  int n_i; // initial energy level (integer)
  int n_j; // final energy level (integer)
  char unit; // unit for output, either J (Joules) or e (Electron Volts) (character)

  // We then ask the user to input values for Z, n_i, n_j, unit
  std::cout << "\nPlease enter values for: Atomic number, initial quantum number, final quantum number, and unit (J or e):"; // Use the output stream std::cout to print a message to ask the user
  std::cout << "\nEnter these values, seperated by spaces, in the order they appear above: "; // Prompt user on correct input format
  
  // We can then read values input via the users keyboard
  // However, we must now check the formatting and mathematical validity of the user's input
  // We can use a loop to prompt the user for new inputs until their input is totally valid

  bool valid_input = false; // Declare and initialise a boolean variable which tracks validity of user input
  
  // Create a loop that prompts new input until all validity checks are passed
  while (!valid_input) {
     
    std::cin >> Z >> n_i >> n_j >> unit; // Use the input stream std::cin to read user input

    // Check the validity of the input formatting
    if (std::cin.fail()) {
      std::cout << "Invalid input format. Refer above to the input instructions, and try again: ";
      std::cin.clear(); // Clear the error bit
      std::cin.ignore(10000, '\n'); // Ignore invalid input
      continue;
    }

    // Check the validity of the atomic number 
    else if (Z < 1) {
      std::cout << "Invalid atomic number (must be a positive integer). Please try again: ";
    }

    // Check the validity of the quantum numbers
    else if (n_i < 1 || n_j < 1) {
      std::cout << "Invalid initial/final quantum numbers (must be positive integers). Please try again: ";
    }

    else if (n_i < n_j) { // CHECK IF THIS CAN BE <= OR JUST < WITH LECTURERS
      std::cout << "Invalid initial/final quantum numbers (initial must be greater than final). Please try again: ";
    }

    // Check the validity of the units
    else if (unit != 'J' && unit != 'e') {
      std::cout << "Invalid unit (must be J or e). Please try again: ";
    }

    // End loop if all checks passed
    else {
      valid_input = true;
    }

  }
  
  return 0;
}


