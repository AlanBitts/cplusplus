#include <iostream>

void draw(int n);

int main()
{
    int height;
    std::cout << "Enter height of the pyramid: ";
    std::cin >> height;

    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << "#";
        }
        std::cout << "\n";
    }
}