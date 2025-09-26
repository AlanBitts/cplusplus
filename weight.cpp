#include <iostream>

int main() {
  // Add your code below  
  std::cout << "Enter the weight of the item:\n";
  float weight = 0;
  std::cin >> weight;
  float mweight = (weight/9.81)*3.2;
  std::cout << "The item's weight on mars is: " << mweight << "\n";
}