#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
int main(){
    Node *Head,*Tail;
    Tail = Head = NULL;
    int arr[] = {2,4,6,8,10};
    for(int i=0;i<5;i++){
        if(Head==NULL){
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else{
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }
    
}