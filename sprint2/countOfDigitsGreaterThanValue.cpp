#include <iostream>

using namespace std;

int countDigitsGreaterThanValue(int number, int value) {
    int count = 0;

    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        if (digit > value) {
            count++;
        }
        number /= 10; // Remove the last digit
    }

    return count;
}

int main() {
    int number, value;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the value: ";
    cin >> value;

    int result = countDigitsGreaterThanValue(number, value);
    cout << "Output: " << result << endl;

    return 0;
}
