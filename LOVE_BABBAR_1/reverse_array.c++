#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40,50,60,70,80};
    int size = 8;
    int s = 0;
    int e = size-1;
    while(s<e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}