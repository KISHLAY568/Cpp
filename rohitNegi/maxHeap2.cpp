#include <iostream>
using namespace std;

void heapify(int arr[], int index, int size)
{
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < size && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < size && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != index)
    {
        swap(arr[largest], arr[index]);
        heapify(arr, largest, size);
    }
}

void buildMaxHeap(int arr[], int size)
{
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(arr, i, size);
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1,
                 3,
                 5,
                 4,
                 6,
                 13,
                 10,
                 9,
                 8,
                 15,
                 17};

    buildMaxHeap(arr, 11);
    print(arr, 11);
}