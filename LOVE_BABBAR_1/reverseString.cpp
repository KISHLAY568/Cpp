#include<iostream>
#include<string.h>
using namespace std;
int getLength(char a[])
{
    int length = 0;
    int i=0;
    while(a[i]!='\0')
    {
        length++;
        i++;
    }
    return length;

}
void reverse(char a[]){
    int i = 0;
    int l = getLength(a);
    int j = l-1;
    while(i<=j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
int main(){
    char a[100];
    cin.getline(a,100);
    int length = getLength(a);
    cout<<"Length: "<<length<<endl;
    reverse(a);
    cout<<a<<endl;
    return 0;
}