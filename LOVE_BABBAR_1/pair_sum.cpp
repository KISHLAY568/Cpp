#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a{1,3,5,7,2,4,6};
    int sum = 9;
    
    for(int i=0;i<a.size();i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i]+a[j]==sum)
            {
                
                cout<<a[i]<<","<<a[j]<<endl;
            }
        }

    }
    return 0;
}