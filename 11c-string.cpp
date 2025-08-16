#include <iostream>
#include <string>

int main() {
  std::string name;
  std::cout << "Please enter your full name and press enter: ";
  std::getline(std::cin, name); // Allows a user to enter a string
  std::cout << "Your name is: " << name;

  // Substrings
  std::string s = "Hello World.";
  std::string substring = s.substr(6, 5); // Creates a variable "substring" and stores the value 
                                          // from index 6 up to index 10 (5 indexes)
  std::cout << "\nThe substring value is: " << substring; // Substring value is "World"

  std::string sentence = "This is a Hello World String.";     // Creates a string in a variable
  std::string stringToFind = "Hello";                         // Creates a string to find in another variable
  std::string::size_type found = sentence.find(stringToFind);   
  if (found != std::string::npos){
    std::cout << "\nSubstring found at position: " << found;
  } else {
    std::cout << "\nSubstring not found.";
  }
}