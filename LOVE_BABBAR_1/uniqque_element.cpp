#include<iostream>
#include<vector>
using namespace std;
int find(vector<int> b)
{
    int ans = 0;
    for(int i=0;i<b.size();i++)
    {
        ans = ans^b[i];
    }
    return ans;
}
int main()
{
    vector<int> a{1,2,4,2,1,3,9,3,6,5,5,6,4};
    int uniqueElement = find(a);
    cout<<uniqueElement;
    return 0;
}