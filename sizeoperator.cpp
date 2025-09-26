#include <iostream>

int main()
{
    std::string name = "Rui Viveiros";
    double gpa = 2.5;
    char grade = 'F';
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    bool student = true;
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << sizeof(students) << " bytes\n";
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";
}