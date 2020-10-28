#include <iostream>
#include <cstdio>

int main()
{
    for(; ;)
    {
        char choice;
        float x, y;
        std::cin >> x;
        std::cin >> choice;
        std::cin >> y;

        switch (choice)
        {
            case '+':
                std::cout << x << " + " << y << " = " << x + y;
                break;
            case '-':
                std::cout << x << " - " << y << " = " << x - y;
                break;
            case '*':
                std::cout << x << " * " << y << " = " << x * y;
                break;
            case '/':
                std::cout << x << " / " << y << " = " << x / y;
                break;
        }
        std::cout << "\n";
    }
    return 0;
}
