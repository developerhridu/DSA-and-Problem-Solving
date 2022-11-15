#include <iostream>
using namespace std;

int sumOfDigits(int num)
{

    int digit, sum = 0;
    while (num != 0) // negative numbers are allowed
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

int main()
{
    int num;
    cin >> num;
    cout << sumOfDigits(num) << endl;
    // main();

    return 0;
}