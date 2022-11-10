#include <iostream>
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
    void level3()
    {
        cout << "I'm from Student Class" << endl;
    }
};

class FemaleStudent : public Student
{
    void level4()
    {
        cout << "I'm from FemaleStudent Class" << endl;
    }
};

int main()
{
    male h1;
    cout << "Height is " << h1.getHeight() << endl;
    h1.sleep();

    // multilevel inheritance
    //  accessing  Human class from Student class
    Student s1;
    s1.testing();

    // accessing  Male class from Student class
    s1.sleep();

    // accessing  Human class from FemaleStudent class 4 level
    FemaleStudent f1;

    // f1.level3();
    f1.testing();

    return 0;
}