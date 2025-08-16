#include <iostream>

int main(){
  int arr[5] = { 5, 10, 15, 20, 25};

  for(int i = 0; i < 5; i++){
    std::cout << "arr[" << i << "] = " << arr[i] << '\n';
  }
}