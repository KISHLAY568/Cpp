#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int &target){
    if(s.empty()){
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    insertAtBottom(s,target);

    s.push(topElement);
    
}

void reverse(stack<int> &s){
    if(s.empty()){
        cout<<"stack is empty, nothing is to be reversed";
        return;
    }

    

    int topElement = s.top();
    s.pop();

    reverse(s);
    insertAtBottom(s,topElement);
}
int main(){
    stack<int> s;
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

    

    reverse(s);

    cout<<"printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}