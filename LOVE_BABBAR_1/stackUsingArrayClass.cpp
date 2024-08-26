#include <iostream>
using namespace std;

class stack
{
public:
    int *arr;
    int size;
    int top;

    stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            top--;
        }
    }

    int getTop()
    {
        if (top == -1)
        {
            cout << "There is not element in Stack " << endl;
        }
        else
        {
            return arr[top];
        }
    }

    void getsize()
    {
        cout << top + 1;
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    stack s(10);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.getsize();

    while (!s.empty())
    {
        cout << endl
             << s.getTop() << " ";
        s.pop();
    }

    return 0;
}