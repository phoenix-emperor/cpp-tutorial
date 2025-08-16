#include <iostream>

void myfunction();    // Function Declaration

int main() {
  myfunction();
  return 0;
}

// Function Definition
void myfunction() {
  std::cout << "Hello World from a function.";
}