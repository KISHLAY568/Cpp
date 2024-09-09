#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a{5,4,3,2,1};
    for(int i=0;i<a.size()-1;i++)
    {
        int minIndex = i;
        for(int j=i+1;j<a.size();j++)
        {
            if(a[j]<a[minIndex])
            {
                minIndex = j;
            }
        }
        swap(a[i],a[minIndex]);
    }

    for(auto i:a)
    {
        cout<<i<<" ";
    }
    return 0;
}