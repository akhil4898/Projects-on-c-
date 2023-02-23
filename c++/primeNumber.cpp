#include <iostream>

using namespace std;

void isPrime(int n)
{
    if(n == 0 || n == 1)
    {
        cout << "Number is not prime.." << endl;
        return ;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Number is not prime... " << endl;
            return;
        }
        
    }
    cout << "Number is prime..." << endl;
    
}


int main()
{

    int n;
    cout << "Enter num:";
    cin >> n;
    isPrime(n);
    return 0;
}