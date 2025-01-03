#include<iostream>
using namespace std;

int factorial(int n){
  int fact=1;
  for(int i=1; i<=n; i++){
    fact *= i;
  }
  return fact;
}

int factorialDigitSum(int n){
  int num = factorial(n);
  int sum = 0;
  while(num > 0){
    sum += num%10;
    num /= 10;
  }
  return sum;
}


int main(){
  int n;
  cin>>n;
  // cout<<factorial(n)<<endl;
  cout<<factorialDigitSum(n)<<endl;
  return 0;
}