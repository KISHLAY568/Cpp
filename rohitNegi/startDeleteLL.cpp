#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    int n;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (head == NULL)
        {
            head = new Node(m);
            tail = head;
        }
        else
        {
            tail->next = new Node(m);
            tail = tail->next;
        }
    }

    
    if (head != NULL)
    {
        Node *temp;
        temp = head;
        head = head->next;
        delete temp;
    }

    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}