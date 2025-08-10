#include <iostream>
#include <string>

int main() {
  std::string s = "Hello World";
  char c = '!';
  s += c;
  std::cout << s;
  
  std::string s1 = "\nWelcome to ";
  std::string s2 = "the world of ";
  std::string s3 = "programming in C++";
  c = '.';
  std::string sentence = s1 + s2 + s3 + c;
  std::cout << sentence;
}