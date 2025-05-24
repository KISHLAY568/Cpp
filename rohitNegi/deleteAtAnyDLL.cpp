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

    if (pos == 1)
    {
        if (head != NULL)
        {
            if (head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                Node *temp = head;
                head = head->next;
                delete temp;
                head->prev = NULL;
            }
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
            curr->prev->next = NULL;
            delete curr;
        }
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
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