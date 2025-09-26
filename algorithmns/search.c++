#include <iostream>

int main()
{
    int numbers [] = {20, 500, 10, 5, 100, 1, 50};

    int n;
    std::cout << "Number: ";
    std::cin >> n;
// linear search 
    for (int i = 0; i < 7; i++){
        if (numbers[i] == n){
            std::cout << "Found \n";
            return 0;
        }
    }
    std::cout << "Not found\n";
    return 1;
}