// Maximum Difference between Two Elements such that Larger Element Appears after the Smaller Element

#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements in the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "Maximum Difference between Two Elements such that Larger Element Appears after the Smaller Element is ";

    int ans = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans = max(ans, v[j] - v[i]);
        }
    }
    cout << ans;

    return 0;
}