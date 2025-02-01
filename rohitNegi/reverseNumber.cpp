#include <iostream>
using namespace std;

void reverse(int n)
{
    int ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        n /= 10;
        ans = ans * 10 + rem;
    }
    cout << ans;
}

int main()
{
    int n;
    cin >> n;
    if (n >= -5000 && n <= 5000)
        reverse(n);
    else
        cout << "out of range";
    return 0;
}