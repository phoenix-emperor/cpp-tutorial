#include <iostream>
#include <string>

int main() {
  double pi = 3.12;
  double* p = &pi;
  std::cout << "The value of the pointed-to object is: " << *p;

  std::string s = "This is a sentence.";
  std::string* s2 = &s;
  std::cout << "\n" << s2 << "\n" << &s;
  std::cout << "\n" << *s2 << "\n" << s;
}