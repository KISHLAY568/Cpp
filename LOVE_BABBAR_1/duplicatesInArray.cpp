#include<iostream>
using namespace std;
int main()
{
    int a[]={1, 2, 3, 6, 3, 6, 1};
    int size = 10;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                 
                cout<<a[i]<<" ";
                
                
            }
            
        }
    }
    return 0;
}