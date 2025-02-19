#include <iostream>
using namespace std;
void print1(int arr[], int index, int n)
{
    if (index == n)
        return;
    cout << arr[index] << " ";
    print1(arr, ++index, n);
}
void reversePrint1(int arr[], int index, int n)
{
    if (index == n)
        return;
    reversePrint1(arr, index + 1, n);
    cout << arr[index] << " ";
}
void print2(int arr[], int index)
{
    if (index == -1)
        return;
    print2(arr, index - 1);
    cout << arr[index] << " ";
}
void reversePrint2(int arr[], int index)
{
    if (index == -1)
        return;

    cout << arr[index] << " ";
    reversePrint2(arr, index - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    print1(arr, 0, 5);
    cout << endl;
    print2(arr, 4);
    cout << endl;
    reversePrint1(arr, 0, 5);
    cout << endl;
    reversePrint2(arr, 4);
    return 0;
}