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
Node *createLinkedList(int arr[], int index, int size, Node *prev)
{
    if (index == size)
    {
        return prev;
    }
    Node *temp = new Node(arr[index]);
    temp->next = prev;
    return createLinkedList(arr, index + 1, size, temp);
}
int main()
{
    Node *Head;
    int arr[] = {2, 4, 5, 8, 10};
    Head = createLinkedList(arr, 0, 5, NULL);

    int x = 3;
    int value = 30;
    x--;
    Node *temp = Head;
    while (x--)
    {
        temp = temp->next;
    }

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    temp = Head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}