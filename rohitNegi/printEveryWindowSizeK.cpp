#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    for (int i = 0; i <= n - k; i++)
    {
        for (int j = i; j < k + i; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    return 0;
}