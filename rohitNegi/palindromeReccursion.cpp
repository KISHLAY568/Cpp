#include <iostream>
using namespace std;
bool checkPalindrome(string s, int start, int end)
{
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;
    return checkPalindrome(s, start + 1, end - 1);
}
int main()
{
    string s = "naman";
    cout << checkPalindrome(s, 0, 4);
    return 0;
}