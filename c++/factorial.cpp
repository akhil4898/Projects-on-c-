#include <iostream>

using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
    
}

int factUsingRecursion(int n)
{
    // Base case..
    if(n == 0)
        return 1;
    
    // Recursive Relation..
    return n * factUsingRecursion(n-1);
}

int main()
{
    int n;
    cout << "Enter num: ";
    cin >> n;

    cout << "Factorial is: " << fact(n) << endl;
    cout << endl;
    cout << "Factorial Using Recursion is: " << factUsingRecursion(n) << endl;
    return 0;
}