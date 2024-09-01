#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a{0, 1, 2, 0, 1, 2,0,1,2,0,0,1,1};
    int min = a[0];
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(auto j:a)
    {
        cout<<j<<" ";
    }
    
    return 0;
}