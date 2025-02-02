#include <iostream>
#include <algorithm>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = size - 1;
    //1st method
    // while (start < end)
    // {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

    //2nd mwthod
    reverse(arr, arr+size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}