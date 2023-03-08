#include <iostream>

int main() {
  
  double ph;
  
  std::cout << "Enter the pH value: \n";
  std::cin >> ph;
  
  if(ph > 7)
  {
    std::cout << "Basic\n";
  }
  else if (ph < 7)
  {
    std::cout << "Acidic\n";
  }
  else
  {
    std::cout << "Neutral\n";
  }
}
  
