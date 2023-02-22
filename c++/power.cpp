#include <iostream>

using namespace std;

int power(int n)
{
    int result = 2;
    for (int i = 1; i < n; i++)
    {
        result = result * 2;
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter num: ";
    cin >> n;
    cout << "Result is: " << power(n) << endl;
    return 0;
}