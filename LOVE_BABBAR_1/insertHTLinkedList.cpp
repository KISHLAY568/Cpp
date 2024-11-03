#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }
};
void insertAtHead(Node*& head,Node*& tail,int data)
{
    if(head== NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}
void insertAttail(Node*& head,Node*& tail,int data)
{
    if(head== NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
        return;
    }
    Node* newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;
}
void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,70);
    insertAtHead(head,tail,80);
    insertAttail(head,tail,90);
    insertAttail(head,tail,100);
    print(head);
    return 0;
}