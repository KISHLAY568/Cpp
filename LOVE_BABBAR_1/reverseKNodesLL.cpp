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

Node* reverseKNodes(Node* &first,int k){

    
    int count = 0;
    Node* prev = NULL;
    Node* cur = first;
    Node* forward = cur->next;
    while(count<k){
        forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forward;
        count++;
    }
    if(forward != NULL){
        first->next = reverseKNodes(forward,k);
    }
    return prev;
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
    first = reverseKNodes(first,2);
    print(first);
    
    return 0;
}