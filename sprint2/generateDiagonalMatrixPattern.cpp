#include <iostream>
#include <vector>

using namespace std;

void generateDiagonalMatrix(int size) {
    vector<vector<int>> matrix(size, vector<int>(size, 0));

    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            matrix[i][j] = 1;
        }
    }

    // Printing the matrix
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter matrix size: ";
    cin >> size;

    generateDiagonalMatrix(size);

    return 0;
}
