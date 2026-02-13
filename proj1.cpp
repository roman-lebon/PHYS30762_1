// proj1.cpp
// Program testing compilation and input/output using The Bohr Model
// PHYS30762 Assignment 1
// Roman le Bon - 11423027

// We include the standard input/output library
#include <iostream>

// We always include a main function at program startup
int main()
{
  // Declare variables - no initialisation as user(s) will input values
  int Z; // atomic number (integer)
  int n_i; // initial energy level (integer)
  int n_j; // final energy level (integer)
  char unit; // unit for output, either J (Joules) or e (Electron Volts) (character)

  // We then ask the user to input values for Z, n_i, n_j, unit
  std::cout << "Please enter values for: Atomic number, initial quantum number, final quantum number, and unit (J or e):"; // Use the output stream std::cout to print a message to ask the user
  std::cout << "\nEnter these values, seperated by spaces, in the order they appear above: "; // Prompt user on correct input format
}