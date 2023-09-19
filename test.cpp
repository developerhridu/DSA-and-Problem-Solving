#include <bits/stdc++.h>
using namespace std;

int main()
{

	stack <int>s;
    s.push(1);
    s.push(2);
    s.push(3);

	while (!s.empty())
    {
        /* code */
        cout << s.top() <<" ";
        s.pop();
    }
    cout << endl;

    s.push(10);
    if(s.empty()) cout << "Empty" << endl;
    else cout << "not empty" << " size is "<< s.size() << endl;
    
}
