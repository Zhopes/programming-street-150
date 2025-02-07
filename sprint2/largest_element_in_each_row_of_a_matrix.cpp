#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

vector<int> findLargestInEachRow(vector<vector<int>>& matrix) {
    vector<int> largestElements;

    for (const auto& row : matrix) {
        int maxElement = INT_MIN;
        for (int num : row) {
            maxElement = max(maxElement, num);
        }
        largestElements.push_back(maxElement);
    }

    return largestElements;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = findLargestInEachRow(matrix);

    cout << "Output: [";
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
