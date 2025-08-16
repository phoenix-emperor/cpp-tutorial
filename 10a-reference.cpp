#include <iostream>

int main() {
  double mydouble = 12.34;
  double& myreference = mydouble;
  std::cout << "Reference Value: " << myreference << " | Original Value: " << mydouble;
  myreference = 43.21;
  std::cout << "\nReference Value: " << myreference << " | Original Value: " << mydouble;
  mydouble = 56.789;
  std::cout << "\nUpdated Reference: " << myreference << " | Updated Original: " << mydouble;
}