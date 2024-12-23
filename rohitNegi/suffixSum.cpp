#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> suffixSum(n);

    suffixSum[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--){
        suffixSum[i] = suffixSum[i+1]+arr[i];
    }

    cout<<"Suffix Sum Array: ";
    for(auto i:suffixSum){
        cout<<i<<" ";
    }
    return 0;
}