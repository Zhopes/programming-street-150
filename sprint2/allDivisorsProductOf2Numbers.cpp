// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

//output : [1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30, 60]
// vector<int> findDivisors(int &num){
//   vector<int> divisors;

//   for(int i = 1; i*i <= num; i++){
//     if(num % i == 0){
//       divisors.push_back(i);
//       if(i != num/i){
//         divisors.push_back(num/i);
//       }
//     }
//   }
//   sort(divisors.begin(), divisors.end());
//   return divisors;
// }

// int main(){
//   int num1, num2;
//   cin>>num1>>num2;

//   int prod = num1*num2;
//   vector<int> divisors = findDivisors(prod);
//   cout<< "[";
//   for(size_t i=0; i<divisors.size(); i++){
//     cout<<divisors[i];
//     if(i != divisors.size()-1) cout<<",";
//   }
//   cout<<']'<<endl;
//   return 0;
// }





// Extracting primes: O(√N1 + √N2)
// Generating divisors: O(2^k)
// Sorting: O(D log D) (where D = 2^k)  //set automatically maintains sorted order
// Total complexity :O(√N1 + √N2 + (2^k)log(2^k))


// output : [1, 2, 3, 5, 6, 10, 15, 30]

#include <iostream>
#include <set>
#include <vector>
#include <cmath>
using namespace std;


// Function to find unique prime factors of a number
vector<int> getUniquePrimeFactors(int n) {
    vector<int> primes;
    
    // Check for factor 2
    if (n % 2 == 0) {
        primes.push_back(2);
        while (n % 2 == 0) n /= 2;
    }

    // Check for odd factors
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            primes.push_back(i);
            while (n % i == 0) n /= i;
        }
    }

    // If n is still a prime number
    if (n > 1) {
        primes.push_back(n);
    }

    return primes;
}

// Function to generate divisors using unique prime factors
void generateDivisors(vector<int>& primes, int index, int current, set<int>& divisors) {
    if (index == primes.size()) {
        divisors.insert(current);
        return;
    }
    
    generateDivisors(primes, index + 1, current, divisors);
    generateDivisors(primes, index + 1, current * primes[index], divisors);
}

int main() {
    int number1 = 6, number2 = 10;

    // Get unique prime factors of both numbers
    vector<int> primes1 = getUniquePrimeFactors(number1);
    vector<int> primes2 = getUniquePrimeFactors(number2);

    // Merge unique prime factors
    set<int> uniquePrimes(primes1.begin(), primes1.end());
    uniquePrimes.insert(primes2.begin(), primes2.end());

    vector<int> primes(uniquePrimes.begin(), uniquePrimes.end());
    set<int> divisors;

    // Generate divisors using these primes
    generateDivisors(primes, 0, 1, divisors);

    // Print the correct divisors
    cout << "[";
    bool first = true;
    for (int d : divisors) {
        if (!first) cout << ", ";
        cout << d;
        first = false;
    }
    cout << "]" << endl;

    return 0;
}
