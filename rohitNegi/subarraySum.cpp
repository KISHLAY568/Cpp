#include <iostream>
#include <vector>
using namespace std;
bool divide(vector<int> arr){
    int prefixSum=0,totalSum=0;
    for(int i=0;i<arr.size();i++){
        totalSum+=arr[i];
    }
    for(int i=0;i<arr.size()-1;i++){
        prefixSum+=arr[i];
        int ans = totalSum - prefixSum;
        if(ans=prefixSum){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    cout<<divide(v);
    return 0;
}