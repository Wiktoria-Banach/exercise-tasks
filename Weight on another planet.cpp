#include <iostream>

int main() {

double weight;
int planet;

std::cout << "What is your weight on Earth?: \n";
std::cin >> weight;
std::cout << "\nHere are options you can choose:\n";
std::cout << "1. Venus  2. Mars  3. Jupiter\n4. Saturn  5. Uranus  6. Neptune\n";
std::cout << "\nWhich planet are you planning to visit?: \n";
std::cin >> planet;

if(planet==1)
  weight = weight * 0.38;
else if(planet==2)
  weight = weight * 0.91;
else if(planet==3)
  weight = weight * 0.38;
else if(planet==4)
  weight = weight * 2.34;
else if(planet==5)
  weight = weight * 1.06;
else if(planet==6)
  weight = weight * 0.92;
else if(planet==7)
  weight = weight * 1.19;

std::cout << "Your weight on this planet will be equal " << weight << ".\n";
 
}
