#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "The Number of Rows and Column must be the same for Transposing a Matrix: " << endl;
    int m, n;
    cout << "Enter the size of row: ";
    cin >> m;
    cout << "Enter the size of column: ";
    cin >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    vector<vector<int>> arr(m, vector<int>(n));

    cout << "Enter the elements :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
            arr[j][i] = matrix[i][j];
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

    cout << "Transposed Matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
