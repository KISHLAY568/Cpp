#include <iostream>
using namespace std;
class heap
{
public:
    int arr[101];
    int size;

    heap()
    {
        size = 0;
    }

    void insert(int data)
    {
        size = size + 1;
        int index = size;
        arr[index] = data;

        while (index > 1)
        {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }

    int Delete()
    {
        int ans = arr[1];
        arr[1] = arr[size];
        size--;

        int index = 1;
        while (index < size)
        {
            int left = 2 * index;
            int right = 2 * index + 1;
            int largest = index;

            if (left < size && arr[largest] < arr[left])
            {
                largest = left;
            }
            if (right < size && arr[largest] < arr[right])
            {
                largest = right;
            }

            if (largest == index)
            {
                break;
            }
            else
            {
                swap(arr[index], arr[largest]);
                index = largest;
            }
        }
        return ans;
    }
};

int main()
{
    heap h;
    h.arr[0] = -1;
    h.insert(50);
    h.insert(30);
    h.insert(70);
    h.insert(40);
    h.insert(80);
    h.insert(100);

    cout << "Printing the heap" << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout<<endl;

    int a = h.Delete();
    cout<<a<<endl;

    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;

    return 0;
}