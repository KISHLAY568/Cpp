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

class Stack
{
    Node *top;
    int size;

public:
    Stack()
    {
        top = NULL;
        size = 0;
    }
    void push(int val)
    {
        Node *temp = new Node(val);
        // Heap Memory is FULL
        if (temp == NULL)
        {
            cout << "stack overflow";
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout << val << " pushed successfully\n";
        }
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "stack underflow\n";
            return;
        }
        else
        {
            Node *temp = top;
            cout << temp->data << " popped successfully\n";
            top = top->next;
            delete temp;
            size--;
        }
    }

    int peek()
    {
        if (top == NULL)
        {
            cout << "stack is empty\n";
            return -1;
        }
        else
        {
            return top->data;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }
    int isSize()
    {
        return size;
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(85);
    s.push(95);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout << s.peek();
    cout << s.isEmpty();
    cout << s.isSize();
}