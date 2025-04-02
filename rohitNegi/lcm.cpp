#include<iostream>
using namespace std;
int main(){
    int m,n,lcm;
    cin>>m>>n;
    int max_both = max(m,n);
    int max_value=m*n;
    for(int i = max_both;i<=max_value;i++){
        if(i%m==0 && i%n==0){
            lcm = i;
            break;
        }
    }
    cout<<lcm<<" ";
    int hcf = (m*n)/lcm;
    cout<<hcf;
}