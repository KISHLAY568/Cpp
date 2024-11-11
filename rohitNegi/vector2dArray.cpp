#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the size of row: ";
    cin >> m;
    cout << "Enter the size of column: ";
    cin >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Your matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
