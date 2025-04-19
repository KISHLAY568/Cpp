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

    Node *trav = head;
    while (trav)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }

    cout << endl;

    Node *curr = head;
    while (curr->next)
    {
        curr = curr->next;
    }

    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->prev;
    }

    return 0;
}