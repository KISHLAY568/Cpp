#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            arr[i] = a;
        }
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = i+1; j < m; j++)
            {
                if (i < j)
                {
                    if ((arr[j] - arr[i]) == (j - i))
                        ;

                    count++;
                }
            }
        }
        cout << count << endl;
    }
}