#include <iostream>

int main() {
  int i = 3;

  switch (i) {
    case 1:
      std::cout << "The value is 1.\n";
      break;
    case 2:
      std::cout << "The value is 2.\n";
      break;
    case 3:
      std::cout << "The value is 3.\n";
      break;
    case 4:
      std::cout << "The value is 4.\n";
      break;
    default:
      std::cout << "The value is none of the above.\n";
      break;
  }
}