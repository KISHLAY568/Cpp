#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

public:
    bool flag = 1;
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    void push(int val)
    {
        if (top == size - 1)
        {
            cout << "stack overflow";
            return;
        }
        else
        {
            top++;
            arr[top] = val;
            cout << val << " pushed successfully\n";
            flag = 0;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow";
            return;
        }
        else
        {
            top--;
            if (top == -1)
            {
                flag = 1;
            }
        }
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "stack is empty";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }

    int isSize()
    {
        return top + 1;
    }
};

int main()
{
    Stack s(5);
    // s.push(-1);
    // s.push(2);
    // s.push(3);
    int peek = s.peek();
    if(s.flag==0){
        cout<<peek;
    }
}