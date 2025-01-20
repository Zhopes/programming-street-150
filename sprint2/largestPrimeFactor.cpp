#include<iostream>
using namespace std;

//Bruteforce : O(n2)

// bool isPrime(int num){
//   for(int i=2; i<=num/2; i++){
//     if(num % i == 0){
//       return false;
//     }
//   }
//   return true;
// }

// int largestPrimeFactor(int num){
//   if(isPrime(num)) return num;
//   int ans = 1;
//   for(int i=2; i<=num/2; i++){
//     if(num % i == 0){
//       if(isPrime(i)){
//         ans = max(ans, i);
//       }
//     }
//   }
//   return ans;
// }

//TC: O(sqrt(n))
int largestPrimeFactor(int n){
  int largestPrime = -1;
  while(n%2 == 0){
    largestPrime = 2;
    n /= 2;
  }
  for(int i=3; i*i <= n; i+=2){
    while(n%i == 0){
      largestPrime = i;
      n /= i;
    }
  }

  if(n > 2){
    largestPrime = n;
  }
  return largestPrime;
}

int main(){
  int num;
  cin>>num;
  cout<<largestPrimeFactor(num);
  return 0;
}
