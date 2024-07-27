#include <iostream>
#include <unordered_map>
#include<map>
using namespace std;
int main()
{
    string s = "kishlaykumar";
    unordered_map<char, int> freq1;
    cout<<"Unordered Map"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        freq1[ch]++;
    }
    for (auto i : freq1)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "Ordered Map" << endl;
    map<char, int> freq2;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        freq2[ch]++;
    }
    for (auto i : freq2)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}