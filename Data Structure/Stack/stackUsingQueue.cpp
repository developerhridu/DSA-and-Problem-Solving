#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Stack {
    queue<int> q1, q2;
    public:
        void push(int x)
        {
            q2.push(x);
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }

            swap(q1, q2);
        }

        void pop(){
            if(q1.empty())
                return;
            q1.pop();
        }

        int top(){
            if(q1.empty())
                return -1;
            
            return q1.front();
        }

        int size(){
            return q1.size();
        }
};

int main() {
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    
   
    cout << s.top()<<endl;
    s.pop();
     cout << s.top()<<endl;
    s.pop();
     cout << s.top()<<endl;
    s.pop();
   
    return 0;
}
