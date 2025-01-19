#include<iostream>
using namespace std;

// bool isPerfectNumber(int num){
//   int divisorSum = 0;
//   for(int i=1; i <= num/2; i++){
//     if(num % i == 0){
//       divisorSum += i;
//     }
//   }
//   return num == divisorSum;
// }

bool isPerfectNumber(int n){
  if(n < 2) return false;

  int divisorSum = 1;
  for(int i=2; i*i <= n; i++){
    if(n % i == 0){
      divisorSum += i;
      if(i != n/i){
        divisorSum += n/i;
      }
    }
  }
  return divisorSum == n;
}


int main(){
  int limit;
  cin>>limit;
  for(int i=1; i<=limit; i++){
    if(isPerfectNumber(i)){
      cout<<i<<" ";
    }
  }
  return 0;
}