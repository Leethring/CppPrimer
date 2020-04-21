#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter string 1 and string 2" << endl;
    while (cin >> s1 >> s2)
    {
        if (s1 == s2)
        {
            cout << "string 1 same as string 2" << endl;
        }
        else
        {
            if (s1 < s2)
                cout << "s2 is larger" << endl;
            else 
                cout << "s1 is larger" << endl; 
            if (s1.size() < s2.size())
                cout << "s2 is longer" << endl;
            else if (s1.size() == s2.size())
                cout << "s2 has same length with s1" << endl;
            else
                cout << "s1 is longer" << endl;
        }
    }
    
    return 0;
}

