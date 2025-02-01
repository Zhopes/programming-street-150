#include <iostream>
#include <vector>
using namespace std;

int getMaxLength(const vector<bool>& arr) {
    int count = 0, result = 0;

    for (bool val : arr) {
        if (val == 1) {
            count++;
            result = max(result, count);
        } else {
            count = 0;
        }
    }
    return result;
}

int main() {
    vector<bool> arr = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1};

    if (arr.empty()) {
        cout << "Array is empty, max length: 0" << endl;
    } else {
        cout << "Longest sequence of 1s: " << getMaxLength(arr) << endl;
    }
    
    return 0;
}
