#include <iostream>

int main() {
  int i = 256;

  if (i >= 100 && i <= 300) {
    std::cout << "i is between 100 and 300.\n";
  } else {
    std::cout << "i is either lesser than 100 or greater than 300.\n";
  }

  bool b = true;
  if (i >= 100 || b){
    std::cout << "i is either greater than 100 or b is true\n";
  }

  bool c = !b;
  std::cout << c;
}
