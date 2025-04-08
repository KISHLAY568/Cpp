#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

int main()
{
    int arr[] = {2, 4, 6, 8, 9};
    Node *head = NULL, *tail = NULL;
    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = new Node(arr[i]);
            tail = head;
        }
        else
        {
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    int pos = 5;
    if (pos == 0)
    {
        if (head == NULL)
        {
            head = new Node(5);
        }
        else
        {
            Node *temp = new Node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else
    {
        Node *curr = head;
        while (--pos)
        {
            curr = curr->next;
        }

        if (curr->next == NULL)
        {
            Node *temp = new Node(5);
            temp->prev = curr;
            curr->next = temp;
        }
        else
        {
            Node *temp = new Node(5);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }

    Node *trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
    return 0;
}