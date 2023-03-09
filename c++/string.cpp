#include <bits/stdc++.h>

using namespace std;


int ReverseArray(int a[], int n)
{
    
}


int main()
{

// Solve using extra Array.................

    // int a[5] = {1, 2, 3, 4, 5};
    // int b[5];
    // int k = 0;

    // cout << "Array is: ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    // for (int i = 4; i >= 0; )
    // {
    //     // b[k] = a[i];
    //     // k++;

    //     b[k++] = a[i--];
    // }
    
    // cout << "Reverse Array is: ";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << b[i] << " "; 
    // }
    
    // cout << endl;






// Solve Without using Extra Array..................


    // int a[6] = {1, 2, 3, 4, 5, 6};
    // int size = sizeof(a)/sizeof(a[0]);
    // cout << size << endl;
    // int i = 0, j = size-1;


    // // for (int k = 0; k != size/2; k++)
    // while(i < j)
    // {
    //     int temp = a[i];
    //     a[i++] = a[j];
    //     a[j--] = temp;
        
    // }
    
    // cout << "Reverse Array is: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << a[i] << " "; 
    // }
    
    // cout << endl;







// Using Recursion.....................


    int a[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(a)/sizeof(a[0]);
    ReverseArray(a, 0);












}