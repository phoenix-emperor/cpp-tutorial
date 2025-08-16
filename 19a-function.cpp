#include <iostream>

// int squaredFunction(int x);   // Function Declaration

// Function Definition
int squaredFunction(int x){
  return x * x;
}

// Function that accepts multiple values.
int mySum(int x, int y){
  return x + y;
}

int main() {
  int myResult = squaredFunction(9);  // A call to the function
  std::cout << "Number 9 squared is: " << myResult << "\n";
  int anotherResult = mySum(100, 100); 
  std::cout << "100 + 100 is: " << anotherResult;
} 
