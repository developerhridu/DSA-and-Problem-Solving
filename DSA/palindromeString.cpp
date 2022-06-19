#include <bits/stdc++.h>
using namespace std;

void palindromeOrNot()
{
    string str;
    string tmp;

    cin >> str >> tmp;

    reverse(tmp.begin(), tmp.end());

    if (str == tmp)
        cout << "palindrome \n";
    else
        cout << "Not palindrome";
}

int main()
{
    palindromeOrNot();

    return 0;
}