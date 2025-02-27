#include <iostream>

using namespace std;
int subsetSum(int arr[], int index, int n, int sum)
{
    if (sum == 0)
        return 1;

    if (index == n || sum < 0)
        return 0;

    return subsetSum(arr, index + 1, n, sum) + subsetSum(arr, index, n, sum - arr[index]);
}
int main()
{
    int arr[] = {2, 3, 4};
    int target = 6;
    cout << subsetSum(arr, 0, 3, target);

    return 0;
}