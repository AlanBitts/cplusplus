#include <iostream>

int main() {
  
  std::cout << "How many years is your dog?\n";

  float dogYears;

  std::cin >> dogYears;

  if (dogYears > 2) {
    float years = 21 + (dogYears-2)*4;
    std::cout << "Your dog is " << years << " in dog years!\n";
  }
  else if (dogYears == 2) {
    float years = 21;
    std::cout << "Your dog is " << years << " in dog years!\n";
  }
  else {
    std::cout << "Your dog is 10.5 years in dog years!\n";
  }
}