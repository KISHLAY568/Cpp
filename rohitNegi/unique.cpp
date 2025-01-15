#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {5, 5, 3, 4, 4, 3, 2, 2, 2, 5, 6, 6, 7};
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    int no_of_unique_elements = it - v.begin();
    cout << no_of_unique_elements << endl;
    v.resize(it - v.begin());

    for (auto i : v)
    {
        cout << i << " ";
    }
}