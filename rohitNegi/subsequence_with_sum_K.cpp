#include <iostream>
#include <vector>

using namespace std;

void solve(int i, int n, int s, vector<vector<int>> &ans, vector<int> &temp, vector<int> &arr, int k)
{
    if (i >= n)
    {
        if (s == k)
        {
            ans.push_back(temp);
        }
        return;
    }

    temp.push_back(arr[i]);
    s += arr[i];
    solve(i + 1, n, s, ans, temp, arr, k);
    temp.pop_back();
    s -= arr[i];
    solve(i + 1, n, s, ans, temp, arr, k);
}

bool checkSubsequenceSum(int n, vector<int> &arr, int k)
{
    vector<vector<int>> ans;
    vector<int> temp;
    solve(0, n, 0, ans, temp, arr, k);
    return !ans.empty();
}

int main()
{
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the sum k: ";
    cin >> k;

    if (checkSubsequenceSum(n, arr, k))
    {
        cout << "There exists a subsequence with sum " << k << endl;
    }
    else
    {
        cout << "No subsequence with sum " << k << endl;
    }

    return 0;
}