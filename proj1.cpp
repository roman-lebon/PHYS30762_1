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
  
  std::cin >> Z >> n_i >> n_j >> unit; // Use the input stream std::cin to read user input

  while(std::cin.fail()) {
    std::cout << "\nInvalid input. Refer to the above input instructions, and please try again: "; 
    std::cin.clear(); // Clear fail bit 
    std::cin.ignore(1000, '\n'); // Ignore invalid input (whole line)
    std::cin >> Z >> n_i >> n_j >> unit;
    }
  return 0;
}
