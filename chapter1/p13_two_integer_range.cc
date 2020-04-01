#include <iostream>

int main()
{
    int a, b;

    std::cout << "Enter two integers " << std::endl;
    std::cin >> a >> b;
    while (a <= b)
    {
        std::cout << " " << a ;
        a++;
    }
    return 0;
}

