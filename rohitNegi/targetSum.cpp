#include <iostream>

using namespace std;
int subsetSum(int arr[], int index, int n, int sum)
{
    if (index == n)
    {
        if (sum == 0)
            return 1;
        else
            return 0;
    }
    return subsetSum(arr, index + 1, n, sum) + subsetSum(arr, index + 1, n, sum - arr[index]);
}
int main()
{
    int arr[] = {1, 0};

    cout << subsetSum(arr, 0, 2, 1);

    return 0;
}