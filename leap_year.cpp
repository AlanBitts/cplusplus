#include <iostream>

int main() {
  
  std::cout << "Enter a year.\n";
  int year;
  std::cin >> year;
  if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ) {
    std::cout << "It's a leap year!";
  } else {
    std::cout << "It's not a leap year!";
  }
}