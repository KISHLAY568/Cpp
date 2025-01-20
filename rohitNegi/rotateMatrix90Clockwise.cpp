#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n;
    cout << "Enter the size of the Square Matrix to be rotated 90 degree clockwise: ";

    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    vector<vector<int>> ans(n, vector<int>(n));

    cout << "Enter the elements :";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Your matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][n - 1 - i] = matrix[i][j];
        }
    }

    cout << "Rotated Matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
