#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
public:
    Node *front;
    Node *rear;

    Queue()
    {
        front = rear = NULL;
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void push(int x)
    {
        if (isEmpty())
        {
            cout << "pushed " << x << " into the queue\n";
            front = new Node(x);
            rear = front;
            return;
        }
        else
        {
            cout << "pushed " << x << " into the queue\n";
            rear->next = new Node(x);
            rear = rear->next;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "queue underflow\n";
            return;
        }
        cout<<"popped "<<front->data<<" from the queue\n";
        Node *temp = front;
        front = front->next;
        delete temp;
    }

    void start()
    {
        if (isEmpty())
        {
            cout << "queue is empty\n";
            return;
        }
        cout << front->data << endl;
    }
};

int main()
{
    Queue q;
    q.push(5);
    q.push(55);
    q.push(15);
    q.push(58);
    q.push(65);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.start();
    return 0;
}