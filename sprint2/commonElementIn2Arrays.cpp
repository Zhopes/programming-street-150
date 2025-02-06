#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> findCommonElements(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> elements(arr1.begin(), arr1.end());
    vector<int> common;

    for (int num : arr2) {
        if (elements.count(num)) {
            common.push_back(num);
            elements.erase(num); // Remove to avoid duplicates
        }
    }

    return common;
}

int main() {
    vector<int> array1 = {1, 2, 3, 4};
    vector<int> array2 = {3, 4, 5, 6};

    vector<int> commonElements = findCommonElements(array1, array2);

    cout << "Output: [";
    for (size_t i = 0; i < commonElements.size(); i++) {
        cout << commonElements[i];
        if (i < commonElements.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
