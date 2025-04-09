#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;
    int ans = INT_MIN;
    for (int i = 0; i <= n - 3; i++)
    {
        int sum = 0;
        for (int j = i; j < i + k; j++)
        {
            // cout << v[j] << " ";
            sum += v[j];
        }
        ans = max(ans, sum);
    }

    cout << ans;
}