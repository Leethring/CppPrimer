#include <iostream>

int main()
{
    int a = 50, target = 100;
    int total = 0;
    while(a <= target)
    {
        total += a;
        a++;
    }
    std::cout << "the sum from 50 to 100 " << total << std::endl;
    return 0;
}

