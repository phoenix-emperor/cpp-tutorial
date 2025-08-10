#include <iostream>

int main() {
  int x = 123;
  // int* p; // Delcares an uninitialised pointer that points to an int object
  int* p = &x; // We use the address-of operator "&" to point p to x.

  char c = 'f';
  char* po = &c;

  char* n = nullptr; // Initiliases a point that does not point to any object.

  char d = *po; // This dereferences a pointer. i.e. It access the value stored in a pointer
  // std::cout << p << "\n" << po << "\n" << n << "\n";
  // std::cout << *p << "\n" << *po << "\n" << n << "\n" << d;
  *p = 456; // Changes the value of the dereferenced pointer
  std::cout << x;
}