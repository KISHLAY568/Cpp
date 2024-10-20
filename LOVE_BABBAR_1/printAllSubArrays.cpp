#include <iostream>
#include <vector>
using namespace std;
void printSubArrayUtil(vector<int> &v, int start, int end)
{
    if (end == v.size())
    {
        return;
    }
    for (int i = start; i <= end; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    printSubArrayUtil(v, start, end + 1);
}
void printSubArray(vector<int> &v)
{
    for (int start = 0; start < v.size(); start++)
    {
        int end = start;
        printSubArrayUtil(v, start, end);
    }
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    printSubArray(v);
}