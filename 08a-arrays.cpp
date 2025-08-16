#include <iostream>

int main() {
  double arr[5] = { 0.2, 4.5, 3.12, 9.12, .98};
  std::cout << arr[0] << "\n" << arr[4];
  arr[0] =  11.43;
  arr[4] = .234;
  std::cout << "\n" << arr[0] << "\n" << arr[4];
}