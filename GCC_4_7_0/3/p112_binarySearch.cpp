#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    int guess;
    vector<int> text;

    for (int i = 0; i < 1000; i++)
        text.push_back(i);

    cout << "Enter a integer for guessing " << endl;
    cin >> guess;

    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg) / 2; //original midpoint

    while (mid != end && *mid != guess)
    {
        if (guess < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
    }

    cout << " Bingo! The right answer is " << *mid << endl;

    return 0;
}

