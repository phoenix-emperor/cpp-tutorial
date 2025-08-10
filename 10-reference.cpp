#include <iostream>

int main() {
  int x = 123;
  int& y = x; // This allows to variable/objects (x and y) to reference the same memory.
  x = 456; // Both x and y now hold the value 456
  y = 789; // Both x and y now hold the value 789
}