#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    cout << "Enter a positive Number to calculate its factorial : ";
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Please enter a positive number";
        return 0;
    }
    cout << "Factorial of " << n << " is " << fact(n);
}