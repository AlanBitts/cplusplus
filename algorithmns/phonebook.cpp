#include <iostream>

typedef struct
{
    std::string name;
    std::string number; 
}person;


int main()
{
    person people[3];

    people[0].name = "Carter";
    people[0].number = "902378468";
    people[1].name = "John";
    people[1].number = "90232432468";
    people[2].name = "David";
    people[2].number = "9023434468";

    std::cout << "Enter a name: ";
    std::string name;
    std::cin >> name;

    for( int i = 0; i < 3; i++)
    {
        if (people[i].name == name)
        {
            std::cout << "####################\n";
            std::cout << "Person found: " << people[i].name << "\n" << "Number : " << people[i].number << "\n";
            std::cout << "####################\n";
            return 0;

        }
    }
    std::cout << "####################\n";
    std::cout << "Person not found!###\n";
    std::cout << "####################\n";
    return 1;

}