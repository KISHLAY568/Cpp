#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum1 += arr[i];
    }
    int sum2 = ((n - 1) * (n)) / 2; //(n*(n+1))/2 sum of first n natural no.

    cout << sum1 - sum2;
}