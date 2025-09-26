#include <iostream>
#include <vector>

int main(){
  std::vector<int> numbers{2, 4, 3, 6, 1, 9};
  int total_even = 0;
  int total_odd = 1;

  for (int i = 0; i < numbers.size(); i++){
    if (numbers[i] % 2 == 0){
      total_even = total_even + numbers[i];
    } else {
      total_odd = total_odd * numbers[i];
    }
  }
    

  std::cout << "Sum of even numbers is " << total_even << "\n";
  std::cout << "Product of odd numbers is " << total_odd;
}