#include <iostream>
using namespace std;
class MaxHeap
{
    int *arr;
    int size;
    int total_size;

public:
    MaxHeap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int val)
    {
        if (size == total_size)
        {
            cout << "Heap Overflow" << endl;
            return;
        }

        arr[size] = val;
        int index = size;
        size++;

        // check for correct position
        while (index > 0 && arr[(index - 1) / 2] < arr[index])
        {
            swap(arr[(index - 1) / 2], arr[index]);
            index = (index - 1) / 2;
        }

        cout << arr[index] << " inserted into Heap\n";
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }

    void heapify(int index)
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
            heapify(largest);
        }
    }

    void Delete()
    {
        if (size == 0)
        {
            cout << "Heap Underflow\n";
            return;
        }

        cout << arr[0] << " is deleted\n";
        arr[0] = arr[size - 1];
        size--;

        if (size == 0)
        {
            return;
        }

        heapify(0);
    }
};
int main()
{
    MaxHeap h(6);
    h.insert(23);
    h.insert(13);
    h.insert(30);
    h.insert(40);
    h.insert(26);
    h.insert(45);
    h.Delete();

    h.print();
}