#include <iostream>
using namespace std;

void Swap(int &a, int &b, int &c)
{
    int d, e;
    d = a;
    e = b;
    a = c;
    b = d;
    c = e;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    Swap(a, b, c);
    cout << a << b << c;
    return 0;
}