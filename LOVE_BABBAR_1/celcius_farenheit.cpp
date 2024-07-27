#include<iostream>
using namespace std;
int main()
{
    cout<<"Press 1 to cnvert Celsius into Fahrenheit \npress 2 to convert Fahrenheit into celsius: ";
    int i;
    cin>>i;
    float c,f;
    if(i==1)
    {
        cout<<"Enter Temperature in Celsius: ";
        cin>>c;
        f = (9.0/5)*c + 32;
        cout<<"Temperature in Fahrenheit is "<<f <<endl;
    }
    if(i==2)
    {
        cout<<"Enter Temperature in Fahrenheit: ";
        cin>>f;
        c = (f-32)*(5.0/9);
        cout<<"Temperature in Celsius is "<<c <<endl;
    }

}