#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next= NULL;
    }
};

Node* middle(Node* &first){

    if(first == NULL){
        return first;
    }
    if(first->next == NULL){
        return first;
    }
    Node* slow = first;
    Node* fast = first->next;
    
    while(slow!=NULL && fast!=NULL){
    fast = fast->next;
    if(fast!=NULL){
        fast = fast->next;
        slow = slow->next;
    }}
    return slow;
}

void print(Node* &first){
    Node* temp = first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    print(first);
    
    cout<<"Middle node is: "<<middle(first)->data;
    return 0;
}