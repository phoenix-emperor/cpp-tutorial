#include <iostream>
#include <string>

int main() {
  std:: string s = "Hello World.";
  char c1 = s[0];     // Returns 'H'
  char c2 = s.at(0);  // Returns 'H'

  char c3 = s[6];     // Returns 'W'
  char c4 = s.at(6);  // Returns 'W'

  std::cout << "1st char: " << c1 << ", 6th char: " << c3 << "\n";
  std::cout << c1 << c2 << c3 << c4;
}