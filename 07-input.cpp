#include <iostream>

int main() {
  std::cout << "Please enter a number and press enter: ";
  int x = 0;
  std::cin >> x; // The std::cin is the standard input stream 
  // It uses the >> operator to extract data from the variable x
  // Used for inputting data (from the keyboard)
  std::cout << "You entered: " << x;

  // We can accept multiple values from the standard input
  std::cout << "\nEnter two numbers separated by a space then press enter: ";
  int j = 0;
  int k = 0;
  std::cin >> j >> k;
  std::cout << "You entered: " << j << " and " << k;

  // We can also accept values of different types.
  std::cout << "\nEnter a character, an integer and a double separated by a space: ";
  char c = 0;
  int i = 0;
  double d = 0.0; 
  std::cin >> c >> i >> d;
  std::cout << "You entered: " << c << ", " << i << " and " << d;
}