#include <iostream>
using namespace std;
void upperToLower(string &str, int index)
{
    if (index == -1)
        return;
    str[index] = 'a' + str[index] - 'A';
    upperToLower(str, index - 1);
}
int main()
{
    string str = "KISHLAYKUMAR";
    upperToLower(str, 11);
    cout << str;
    return 0;
}