/**
In the Name of Allah
Author : Mizanur Rahman Hridu
Email  : hridu.hstu@gmail.com
Date   : 05-03-2021
**/

#include <bits/stdc++.h>
using namespace std;

// void learningList()
// {
//     // List
//     list<int> mylist;

//     mylist.push_back(10); //10
//     mylist.push_back(15); //10, 15
//     mylist.push_front(5); // 5, 10, 15  // can push front in list but not in vector
//     mylist.erase(10);
//     for (auto it : mylist)
//         cout << it << " ";
//     cout << endl;

//     // Add elemet in any index

//     list<int>::iterator it;
//     it = mylist.begin(); // points the first element at index 0
//     it++;                // point at index[1]

//     // reverse the list
//     mylist.reverse();
//     for (auto it : mylist)
//         cout << it << " ";
//     cout << endl;
// }

void learningMap()
{
    //
    // key in map must be unique. But value can be duplicated
    map<string, int> m; // Map is a key value pair
    map<string, int>::iterator it;

    m["Hridu"] = 43;
    m["Arnob"] = 42;
    m["Nabil"] = 41;
    m.insert(make_pair("Dipto", 40)); // Same as m.["Dipto"] = 40

    it = m.begin();

    for (it = m.begin(); it != m.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
}

void learningPair()
{
    // pair have key and value
    pair<string, int> p("Hridu", 1702153);
    p = make_pair("Arnob", 40);
    cout << p.first << " " << p.second << endl;

    // vector as a pair

    vector<pair<string, int>> v;
    v.push_back(make_pair("Akash", 30));
    v.push_back(make_pair("Hridu", 40));
    cout << v[0].first << " " << v[0].second << endl;
    cout << v[1].first << " " << v[1].second << endl;
}

void learningSet()
{
    //set must have unique values
    // set sorts the values

    set<string> s;
    set<string>::iterator it;

    s.insert("Hridu");
    s.insert("Akash");
    s.insert("Majeed");

    for (it = s.begin(); it != s.end(); ++it)
    {
        cout << *it << " ";
    }
}

void learningStack()
{
    // Iterator can not use in stack
    stack<string> s;

    s.push("Hridu");
    s.push("Arnob");
    s.push("Dipto");

    //Prints all element from stack
    while (!s.empty())
    {
        string x;
        x = s.top();
        cout << x << endl;

        s.pop();
    }
}

int main()

{
    // learningList();
    // learningMap();
    // learningPair();
    // learningSet();
    learningStack();

    return 0;
}