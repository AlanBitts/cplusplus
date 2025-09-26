#include <iostream>

typedef struct
{
    std::string name;
    std::string number; 
}person;

person addPerson(person people[]);
int getPerson(person people[]);

int main()
{
    std::cout << "*****Simple Phoneboo"
    person people;
    
    addPerson(&people);
    getPerson(&people);

}

int getPerson(person people[])
{
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

person addPerson(person people[])
{
    std::string name;
    std::string number;

    std::cout << "Enter a name: ";
    std::cin >> name;
    std::cout << "Enter number: ";
    std::cin >> number;

    for( int i = 0; i < 3; i++)
    {
        if (people[i].name == name)
        {
            std::cout << name << " already in your phonebook!\n";
        } else
        {
            person people;
            people.name = name;
            people.number = number;
            return people;
        } 
    } 
}