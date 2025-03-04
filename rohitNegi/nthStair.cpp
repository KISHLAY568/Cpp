#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int num1 = 1;
    int num2 = 2;
    if (n <= 2)
    {
        cout << n;
        return 0;
    }
    for (int i = 3; i <= n; i++)
    {
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }

    cout << sum;
}