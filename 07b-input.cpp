#include <iostream>

int main() {
  int x = 123;
  x++;
  x += 20;
  std::cout << "X was initiliased, post-incremented and then increased by 20 using compound operator." << x;
}