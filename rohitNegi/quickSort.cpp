#include <iostream>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= arr[end])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos - 1;
}
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int pivot = partition(arr, start, end);
    // left
    quickSort(arr, start, pivot - 1);
    // right
    quickSort(arr, pivot + 1, end);
}
int main()
{
    int arr[] = {10, 3, 4, 1, 5, 6, 3, 2, 11, 9, -1, 50};
    quickSort(arr, 0, 11);
    for (int i = 0; i < 12; i++)
    {
        cout << arr[i] << " ";
    }
}