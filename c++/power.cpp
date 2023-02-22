#include <iostream>

using namespace std;

int power(int exponent)
{
    int result = 2;
    for (int i = 1; i < exponent; i++)
    {
        result = result * 2;
    }
    return result;
}


int power(int base, int exponent)
{
    int power = base;
    for (int i = 1; i < exponent; i++)
    {
            power = power * base;   
    }
    return power;
}

int main()
{
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter Exponent: ";
    cin >> exponent;
    cout << "Result is: " << power(exponent) << endl;
    cout << "Result is: " << power(base, exponent) << endl;
    return 0;
}