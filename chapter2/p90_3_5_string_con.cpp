#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    string strCon;
    cout << "Enter two strings." << endl;
    cin >> s1 >> s2;
    strCon = s1 + s2;
    cout << strCon << endl;
    strCon = s1 + " " + s2;
    cout << strCon << endl;

    return 0;
}

