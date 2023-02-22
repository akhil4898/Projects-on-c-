#include <iostream>

using namespace std;


void printEvenByAddTwo(int n)
{
    for (int i = 2; i <= n; i+=2)
    {
        cout << i << " is Even number..." << endl;
    }  
}


void printEven(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            cout << i << " is Even number.." << endl;
        }
    }
}

int main()
{
    int n;
    cout << "Enter num: ";
    cin >> n;
    printEven(n);
    cout << endl << endl;
    printEvenByAddTwo(n);
    return 0;
}