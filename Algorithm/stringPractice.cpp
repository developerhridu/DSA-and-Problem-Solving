#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Mizanur Rahman Hridu";

    for (auto u : str) //accessing String
        cout << u;
    cout << endl;
    // Reverse String
    reverse(str.begin(), str.end());
    cout << str << endl;

    char ch = 'a';
    bool f1 = islower(ch); //is the character in lower case?
    cout << f1 << endl;

    char ch2 = 'H';
    bool f2 = isupper(ch2); //is the character in upper case?
    cout << f2 << endl;

    return 0;
}