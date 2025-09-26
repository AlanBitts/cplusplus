#include <iostream>

void showBalance(double balance);
double deposit();
double withraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    do{
    std::cout << "*******y***************";
    std::cout << "Enter your choice:\n";
    std::cout << "**********************";
    std::cout << "1. Show balance\n";
    std::cout << "2. Deposit money\n";
    std::cout << "3. Withraw money\n";
    std::cout << "4. Exit";

    std::cin >> choice;
    switch (choice){
    case 1:
        showBalance(balance);
        break;
    case 2:
        balance = balance + deposit();
        break;
    case 3:
        balance = balance - deposit();
        break;
    case 4:
        std::cout << "Thanks for visiting!\n";
        break;
    default:
        std::cout << "Invalid choice\n";
        break;
    } while(choice != 4);
}
    return 0;
}

void showBalance(double balance){

}
double deposit(){
    return 0;
}
double withraw(double balance){
    return 0;
}