#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40,50,60,70};
    int size = 7;
    int s = 0;
    int e = size-1;
    while(s<=e)
    {
        if(s==e)
        {
            cout<<a[s]<<" ";
        }
        else{
        cout<<a[s]<<" ";
        cout<<a[e]<<" ";}
        s++;
        e--;
    }
    return 0;
}