#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Enter s series string including space " << endl;
    getline(cin, s);
    for (auto &c : s)
    {
        c = 'X';
    }
    cout << s<< endl;

    return 0;
}

