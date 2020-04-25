#include <iostream>

using std::string;
using std::cout, std::cin, std::endl;

int main()
{
    const string hexdigits = "0123456789ABCDEF";
    std::cout << "Enter a series of numbers between 0 and 15"
        << " separated by spaces. Hit ENTER when finished: "
        << endl;
    string result;
    string::size_type n;
    while (std::cin >> n)
    {
        if (n < hexdigits.size())
            result += hexdigits[n];
    }
    cout << "Your hex number is: " << result << endl;

    return 0;
}

