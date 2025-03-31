#include <iostream>
using namespace std;
char convertToUpperCase(char c)
{
    char ans = c - 'a' + 'A';
    return ans;
}
int main()
{
    char c;
    cin >> c;
    cout << convertToUpperCase(c);
    return 0;
}