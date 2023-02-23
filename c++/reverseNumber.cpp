#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int reverseNumber(int n)
{
    int digit, ans = 0;
    while(n != 0)
    {
        digit = n % 10;
        if(ans > INT_MAX/10 || ans < INT_MIN/10)
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    return ans;
}


int main()
{

    int n;
    cout << "Enter num: ";
    cin >> n;
    cout << "Reverse Number is: " << reverseNumber(n) << endl;
    return 0;
}