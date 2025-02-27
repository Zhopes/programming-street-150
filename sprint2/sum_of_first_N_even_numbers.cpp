#include<iostream>
using namespace std;

int evenSum(int n){
  int sum = 0;
  for(int i=1; i<=n; i++){
    sum += 2*i;
  }
  return sum;
}

int main(){
  int n;
  cin>>n;
  cout<<evenSum(n)<<endl;
  return 0;
}