#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a{1,2,4,6,8,10};
    vector<int> b{3,4,5,6};
    vector<int> c;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j])
            {
                
                b[j]  = -1;
            }
        }

    }
    for(int i=0;i<a.size();i++)
    {
        c.push_back(a[i]);
    }
    for(int i=0;i<b.size();i++)
    {
        c.push_back(b[i]);
    }
    for(int i=0;i<c.size();i++)
    {
        if(c[i]!=-1){
            cout<<c[i]<<" ";}
    }
    return 0;
}