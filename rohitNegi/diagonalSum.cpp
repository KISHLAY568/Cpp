#include <iostream>
using namespace std;

void diagonalSum(int arr[][3], int row, int col)
{

    int firstDiagonalSum = 0;
    int secondDiagonalSum = 0;
    int i = 0;
    while (i < 3)
    {
        firstDiagonalSum += arr[i][i];
        i++;
    }
    int j = 3 - 1;
    i = 0;
    while (j >= 0)
    {
        secondDiagonalSum += arr[i][j];
        i++;
        j--;
    }

    cout << firstDiagonalSum << " " << secondDiagonalSum;
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    diagonalSum(arr, 3, 3);

    return 0;
}