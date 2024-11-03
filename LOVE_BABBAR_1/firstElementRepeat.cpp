#include<iostream>
using namespace std;
int firstRepeatd(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                
                return a[i] ;
            }
        }
        
    }
}
int main()
{
    int a[]={1, 2, 3, 3, 3, 6, 6};
    int n = sizeof(a)/sizeof(int);
    cout<<firstRepeatd(a,n);
    return 0;
}