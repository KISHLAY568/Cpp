#include <iostream>
using namespace std;
class Queue
{
public:
    int *arr;
    int front, rear, size;

    Queue(int n)
    {
        front = rear = -1;
        size = n;
        arr = new int[n];
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (rear + 1) % size == front;
    }

    void push(int x)
    {
        if (isEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            cout << "pushed " << x << " into the Queue\n";
        }
        else if (isFull())
        {
            cout << "Queue Overflow\n";
            return;
        }
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout << "pushed " << x << " into the Queue\n";
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue Underflow\n";
            return;
        }
        else if (rear == front)
        {
            cout << "popped " << arr[front] << " from the Queue\n";
            front = rear = -1;
        }
        else
        {
            cout << "popped " << arr[front] << " from the Queue\n";
            front = (front + 1) % size;
        }
    }

    int start()
    {
        if (isEmpty())
        {
            cout << "Queue is empty";
            return -1;
        }

        return arr[front];
    }
};

int main()
{
    Queue q(5);
    q.push(5);
    q.push(15);
    q.push(51);
    q.push(50);
    q.pop();
    q.push(511);
    q.push(4);
}