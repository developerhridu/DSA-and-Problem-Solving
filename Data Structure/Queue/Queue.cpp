#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main() {
    int arrN[5] = {2, 3, 2, 5, 3};
    int arrM[3] = {2, 3, 5};
    unordered_map<int, int> frequency; 
    int cnt = 0;

    queue<int> q;
    for (int i =  0; i <  5; ++i) {
        q.push(arrN[i]);
    }

    while (!q.empty()) {
        int number = q.front();
        q.pop();
        frequency[number]++;
    }

     for (int i = 0; i < 3; ++i) {
        int number = arrM[i];
        int freq = frequency[number];
        cout << number << " occurs " << freq << " times in the queue." << endl;
    }
    return 0;
}