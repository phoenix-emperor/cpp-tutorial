#include <iostream>
#include <string>

int main() {
  char b = 'b';
  std::string fullName;
  std::cout << "Please enter your first and last name: ";
  std::getline(std::cin, fullName);

  std::string stringToFind = " "; 
  std::string::size_type found = fullName.find(stringToFind);  
  std::string firstName = fullName.substr(0, found);
  std::string lastName = fullName.substr(found + 1);
  std::cout << "Your first name is:  " << firstName;
  std::cout << "\nYour last name is:  " << lastName;

  auto charFind = fullName.find(b);

  if (charFind != std::string::npos) {
    std::cout << "\nChar found at position: " << charFind << "\n";
    std::cout << "You're a baller: o.o" << "\n";
  } else {
    std::cout << "\nChar not found." << "\n";
  }
}