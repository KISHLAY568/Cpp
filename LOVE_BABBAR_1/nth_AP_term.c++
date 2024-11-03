#include<iostream>
using namespace std;
int AP(int n)
{
    int nth;
    nth = (3*n)+7;
    return nth;
}


int main()
{
    int a,result;
    cin>>a;
    result = AP(a);
    cout<<result<<endl;
    return 0;
}