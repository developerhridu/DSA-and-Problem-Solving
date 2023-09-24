// // #include <bits/stdc++.h>
// // using namespace std;

// // int addition(int x, int y)
// // {
// //     return x + y;
// // }

// // int subtraction(int x, int y)
// // {
// //     return x - y;
// // }
// // int multiplication(int x, int y)
// // {
// //     return x * y;
// // }

// // int main()
// // {
// //     cout << addition(5, 4) << "\n"
// //          << subtraction(5, 4) << "\n"
// //          << multiplication(5, 4);

// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// class Car
// {
// public:
//     string brand;
//     string model;
//     int year;
//     // int speed = int topspeed(int x, int y){

//     // };
// };

// int main()
// {
//     Car car1;
//     car1.brand = "BMW";
//     car1.model = "X3";
//     car1.year = 2000;

//     Car car2;
//     car2.brand = "Ford";
//     car2.model = "S4";
//     car2.year = 2005;

//     cout << car1.brand << " " << car1.model << " " << car1.year << endl;
//     cout << car2.brand << " " << car2.model << " " << car2.year << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // create a vector to store int
    vector<int> vec;
    int i;

    // display the original size of vec
    cout << "vector size = " << vec.size() << endl;

    // push 5 values into the vector
    for (i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }

    // display extended size of vec
    cout << "extended vector size = " << vec.size() << endl;

    // access 5 values from the vector
    for (i = 0; i < 5; i++)
    {
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    }

    // use iterator to access the values
    vector<int>::iterator v = vec.begin();
    while (v != vec.end())
    {
        cout << "value of v = " << *v << endl;
        v++;
    }

    return 0;
}