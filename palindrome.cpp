#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  int left = 0;
  int right = text.length() - 1;
  while ( left < right){
    if ( text[left] != text[right]){
      return false;
    } 
     left++;
     right--;
  }
 return true;
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}