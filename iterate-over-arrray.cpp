#include <iostream>

std::string students[] = {"Spongebob", "Patrick", "Squidward", "Patty", "Sandy"};
int forEachLoop();
int forLoop();

int main()
{
    forLoop();
    forEachLoop();
    return 0;
}

int forLoop() //traditional loop
{
    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        std::cout << students[i] << "\n";
    }

    return 0;
}
int forEachLoop() //loop that eases the transversal over an iterable data set
{
    for(std::string student : students){
        std::cout << student << "\n";

    }

    return 0;
}