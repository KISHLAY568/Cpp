#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        int j = 1;
        while(j<=(n+1-i))
        {
            cout<<j;
            j = j+1;
        }
        int star=i-1;
        while(star)
        {
            cout<<"*";
            star = star-1;

        }
        int star2=i-1;
        while(star2)
        {
            cout<<"*";
            star2 = star2-1;

        }
        int k = 1;
        int start=n+1-i;
        while(k<=(n+1-i))
        {
            cout<<start;
            start = start-1;
            k = k+1;
        }
        
        cout<<endl;
        i = i+1;
    }
}