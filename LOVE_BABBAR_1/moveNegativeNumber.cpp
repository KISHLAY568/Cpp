#include<iostream>
using namespace std;
int main()
{
    int a[]={-1,-2,4,-3,5,-7,9};
    int size = 7;
    int i=0;
    int start = 0;
    int end = size-1;
    while(start!=end)
    {
        if(a[i]<0)
        {
            swap(a[i],a[start]);
            i++;
            start++;
        }
        else{
            swap(a[i],a[end]);
            end--;
        }
        
    }
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}