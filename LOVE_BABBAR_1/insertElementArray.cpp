#include<iostream>
using namespace std;
int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);

    int p = 2;
    int e = 10;
    for(int i=n;i>p;i--)
    {
        a[i] = a[i-1];

    }
    a[p] = e;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}