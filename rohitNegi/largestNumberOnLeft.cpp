#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {4, 13, 11, 5, 9, 7, 8, 6};

    vector<int> ans(8, -1);
    stack<int> s;

    for (int i = 7; i >= 0; i--)
    {
        while (!s.empty() && arr[i] > arr[s.top()])
        {
            ans[s.top()] = arr[i];
            s.pop();
        }

        s.push(i);
    }

    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}