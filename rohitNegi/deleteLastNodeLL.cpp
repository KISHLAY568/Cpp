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
        if (head->next == NULL)
        {
            Node *temp = head;
            delete temp;
            head = NULL;
        }
        else
        {
            Node *curr = head;
            Node *pre = NULL;
            while (curr->next != NULL)
            {
                pre = curr;
                curr = curr->next;
            }
            pre->next = curr->next;
            delete curr;
        }
    }

    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}