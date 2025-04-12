#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    int a = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        a = a ^ arr[i];
    }
    int b = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        b = b ^ i;
    }

    cout << (a ^ b);
}