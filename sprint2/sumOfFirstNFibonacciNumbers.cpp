#include<iostream>
using namespace std;

// //recursion is highly inefficient
// //T.C : O(2^n)
// int fib(int n){
//   if(n == 1 || n == 2) return 1;
//   return fib(n-1) + fib(n-2);
// }

// int main(){
//   int n;
//   cin>>n;
//   int sum = 0;

//   for(int i=1; i<=n; i++){
//     sum += fib(i);
//   }
//   cout<<sum<<'\n';
//   return 0;
// }



//T.C: O(n)
long long sumFibonacci(int n){
  if(n <= 0) return 0;
  else if(n == 1){
    return 1;
  }
  else if(n == 2){
    return 2;
  }
  else{
    long long a = 1, b = 1, sum = 2;
    for(int i=3; i<=n; i++){
      long long next = a + b;
      sum += next;
      a = b;
      b = next;
    }
    return sum;
  }
}

int main(){
  int n;
  cin>>n;
  cout<<sumFibonacci(n)<<'\n';
  return 0;
}