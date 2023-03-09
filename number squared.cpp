#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  int number;
  
std::cout << "Enter your number: \n";
std::cin >> number;
  
  while (i <= number)
  {
    square = i*i;
    std:: cout << i << "  " << square << "\n";
    i++;
  } 
  
}
