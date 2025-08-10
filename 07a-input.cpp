#include <iostream>

// Accepts two integer values, adds them and returns the result
int main() {
  std::cout << "Enter two numbers separated by a space to add: ";
  int i = 0;
  int j = 0.0;
  std::cin >> i >> j;
  int k = i + j;
  std::cout << "You entered: " << i << " and " << j << " which sums up to: " << k;
}