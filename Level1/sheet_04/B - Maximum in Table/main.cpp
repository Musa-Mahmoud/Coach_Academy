#include <iostream>

using namespace std;

int main()
{
    int matrix[15][15] = {};
    unsigned int n, row, column;

    cin >> n;

    matrix[1][1] = 1;

    for(row = 1; row <= n; row++)
    {
        for(column = 1; column <= n; column++)
        {
            if(matrix[row][column] != 1)
                matrix[row][column] = matrix[row - 1][column] + matrix[row][column - 1];
        }
    }

    cout << matrix[n][n] << "\n";

    return 0;
}
