#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &s,int &target){
    if(s.empty()){
        s.push(target);
        return;
    }

    if(s.top() >= target){
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    insertSorted(s,target);
    s.push(topElement);

    
    
}

void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }

    int topElement = s.top();
    s.pop();
    sortStack(s);

    insertSorted(s,topElement);
    
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    
    sortStack(s);
    cout<<"printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}