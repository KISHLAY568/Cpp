#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the size of row: ";
    cin >> m;
    cout << "Enter the size of column: ";
    cin >> n;
    int arr[m][n];
    cout << "Enter the elements : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = INT_MIN, index = -1;
    for (int i = 0; i < m; i++)
    {
        int total = 0;
        for (int j = 0; j < n; j++)
        {
            total += arr[i][j];
        }

        if (total > sum)
        {
            sum = total;
            index = i;
        }
    }

    cout << "sum of the maximum row is: " << sum << " and the index of the row was " << index;
    return 0;
}