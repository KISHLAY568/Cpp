#include<iostream>
using namespace std;
int fibonnacci(int (n))
{
    if(n<=1)
    {
        return n;
    }
    return fibonnacci(n-1)+ fibonnacci(n-2);
}
int main()
{
    int n,result;
    cin>>n;
    n = n-1;
    result = fibonnacci(n);
    cout<<result<<endl;
    return 0;

}