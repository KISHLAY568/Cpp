#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n;
    cout << "Enter the size of the Square Matrix to be Transposed: ";

    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

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
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    cout << "Transposed Matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
