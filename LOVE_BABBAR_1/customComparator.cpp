#include<iostream>
#include<algorithm>
using namespace std;
bool custom(char first,char second){
    return first > second;
}

int main(){
    string s = "kishlay";
    sort(s.begin(),s.end(),custom);
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}