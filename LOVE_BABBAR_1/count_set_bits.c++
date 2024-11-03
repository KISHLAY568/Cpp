#include<iostream>
using namespace std;

void totalNumberOfSetBits(int a,int b)
{
    int count1=0,p,q,count2=0;
    while(a){
        if(a&1)
        {
            count1 = count1 + 1;
        }
        a = a>>1;
    }
    p = count1;
    while(b){
        if(b&1)
        {
            count2 = count2 + 1;
        }
        b = b>>1;
    }
    q=count2;

    cout<<p+q<<endl;
}
int main()
{
    int m,n;
    cin>>m>>n;
    totalNumberOfSetBits(m,n);
    return 0;
}