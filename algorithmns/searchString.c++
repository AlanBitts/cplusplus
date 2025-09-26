#include <iostream>
#include <string.h>

int main()
{
 std::string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
 std::string s;
 std::cout << "String: ";
 std::getline(std::cin, s);  // This reads the full line including spaces

 for (int i = 0; i < 6; i++){
    if (strings[i] == s){
        std::cout << "Found\n";
        return 0;
    }
 }
 std::cout << "Not found\n";
 return 1;


}