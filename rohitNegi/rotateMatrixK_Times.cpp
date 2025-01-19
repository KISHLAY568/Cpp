#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<vector<int>> &matrix, int k, int n)
{
    while (k)
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            int start = 0, end = n - 1;
            while (start < end)
            {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
        k--;
    }
}

int main()
{
    int n, k;
    cout << "Enter the size of the matrix n*n: ";
    cin >> n;
    cout << "Enter the no. of times you want to rotate the matrix: ";
    cin >> k;
    k = k % 4;
    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
        cout << endl;
    }

    rotate(matrix, k, n);
    cout << "Rotated Matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}