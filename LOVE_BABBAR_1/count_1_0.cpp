#include<iostream>
using namespace std;
int main()
{
    int a[]={0,0,1,0,1,1,1,0,0};
    int size = 9;
    int one = 0;
    int zero = 0;
    
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
            zero++;
        if(a[i]==1)
            one++;
    }
    cout<<"Total count of 1's:"<<one<<endl;
    cout<<"Total count of 0's:"<<zero<<endl;
    return 0;
}