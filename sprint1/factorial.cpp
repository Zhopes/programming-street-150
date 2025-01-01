#include<iostream>
using namespace std;

int factorial(int n){
  if(n == 1) return 1;
  return n*factorial(n-1);
}

int factorial2(int n){
  int ans = 1;
  for(int i=1; i<=n; i++){
    ans *= i;
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<factorial(n)<<endl;
  cout<<factorial2(n)<<endl;
  return 0;
}