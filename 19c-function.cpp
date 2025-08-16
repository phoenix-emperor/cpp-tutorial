#include <iostream>
#include <string>

void myFunction(int byValue);
void anotherFunction(int& byReference);
void newFunction(const std::string& byConstReference);

int main() {
  myFunction(123);
  std::cout << "\n";
  int x = 456;
  anotherFunction(x);
  std::cout << "\n";
  std::string s = "Hello World!";
  newFunction(s);
}

// Passing argument by Value or by Copy
void myFunction(int byValue){
  std::cout << "Argument passed by value: " << byValue;
}

// Passing argument by reference (not advised)
void anotherFunction(int& byReference) {
  byReference++; // We can modify the value of the argument
  std::cout << "Argument passed by reference: " << byReference;
}

// Passing by const reference (preferable)
void newFunction(const std::string& byConstReference) {
  std::cout << "Argument passed by const reference: " << byConstReference;
}
