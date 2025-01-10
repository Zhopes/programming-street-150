#include<iostream>
using namespace std;

bool isPrime(int n){
  if(n<2) return false;
  for(int i=2; i*i<=n; i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

int primeSum(int n){
  int sum = 0;
  for(int i = 2; i*i <= n; i++){
    if(n % i == 0 && isPrime(i)){
      sum += i;
      if(isPrime(n/i) && i != n/i){
        sum += n/i;
      }
    }
  }
  if(isPrime(n)){
    sum += n;
  }
  return sum;
}

int main(){
  int n;
  cin>>n;
  cout<<primeSum(n)<<endl;
  return 0;
}
