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
    if (n == 0)
        return;

    draw(n - 1);

    for (int i = 0; i < n; ++i)
        std::cout << "#";
    std::cout << std::endl;
}