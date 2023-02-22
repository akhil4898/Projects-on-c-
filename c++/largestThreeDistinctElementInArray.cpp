#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[10] = {4, 5, 6, 8, 1, 2, 3, 7, 9, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first, second, third;
        
    if(n < 3)
    {
        cout << "Invalid input..." << endl;
    }

    third = first = second = INT_MIN;
    cout << first << second << third << endl;


    for (int i = 1; i < n; i++)
    {

        if(arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
    
    }



    



    return 0;
}