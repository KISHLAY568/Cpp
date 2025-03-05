#include <iostream>
using namespace std;
int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r)
{
    int ans1 = factorial(n);
    int ans2 = factorial(r);
    int ans3 = factorial(n - r);
    int finalAns = ans1 / (ans2 * ans3);
    return finalAns;
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r);
    return 0;
}