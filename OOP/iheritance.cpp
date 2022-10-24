#include <bits/stdc++.h>
using namespace std;
class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return age;
    }
    void setWeight(int weight)
    {
        this->weight = weight;
    }
    void testing()
    {
        cout << "Testing..." << endl;
    }
};

class male : public Human
{
public:
    string name;
    int getHeight()
    {
        return height;
    }
    void sleep()
    {
        cout << "Male is sleeping: " << endl;
    }
};

class Student : public male
{
};

int main()
{
    male h1;
    cout << "Height is " << h1.getHeight() << endl;
    h1.sleep();

    // accessing  Human class from Student class
    Student s1;
    s1.testing();

    // accessing  Male class from Student class
    s1.sleep();

    return 0;
}