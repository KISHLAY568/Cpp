#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int i=2,sum=0;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum = sum + i;
        }
        i=i+2;
    }
    cout<<"sum of even numbers between 1 and "<<n <<" is " <<sum <<endl;
}