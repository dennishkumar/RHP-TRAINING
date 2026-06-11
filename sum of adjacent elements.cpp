#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and cols: ";
    cin >> rows >> cols;

    int mat[rows][cols];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> mat[i][j];

    cout << "\nSum of Adjacent Elements:\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            int sum = mat[i][j];

            if (i - 1 >= 0)    sum += mat[i-1][j];
            if (i + 1 < rows)  sum += mat[i+1][j];
            if (j - 1 >= 0)    sum += mat[i][j-1];
            if (j + 1 < cols)  sum += mat[i][j+1];

            cout << "mat[" << i << "][" << j << "] and its neighbors sum = " << sum << "\n";
        }
    }

    return 0;
}