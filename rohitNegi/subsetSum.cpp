#include <iostream>
#include <vector>
using namespace std;
void subsetSum(int arr[], int index, int n, int sum, vector<int> &ans)
{
    if (index == n)
    {
        ans.push_back(sum);
        // subset.push_back(temp);
        return;
    }
    // Not include the current element
    subsetSum(arr, index + 1, n, sum, ans);
    // temp.push_back(arr[index]);
    // include the current element
    subsetSum(arr, index + 1, n, sum + arr[index], ans);
    // temp.pop_back();
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    vector<int> ans;

    subsetSum(arr, 0, 4, 0, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];

        cout << endl;
    }
    return 0;
}