#include<iostream>
#include<stack>

using namespace std;

void printMiddle(stack<int> &s, int &totalSize){
    if(s.size()==0){
        cout<<"stack is empty"<<endl;
        return;
    }

    if(s.size()== totalSize/2 + 1){
        cout<<"Middle element is: "<<s.top() <<endl;
        return;
    }

    int temp = s.top();
    s.pop();

    printMiddle(s,totalSize);

    s.push(temp);

}

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);

    int totalSize = s.size();

    printMiddle(s,totalSize);
}