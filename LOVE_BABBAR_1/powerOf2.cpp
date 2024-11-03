#include<iostream>
using namespace std;

int power2(int n){
    if(n==0){
        return 1;
    }
    

    int ans = 2 * power2(n-1);
    return ans;
}


int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int ans = power2(n);
    cout<<ans;
    return 0;
}