#include<iostream>
using namespace std;

int countDigitsGreaterThan(int num, int val){
  int cnt = 0;
  while(num > 0){
    int digit = num % 10;
    if(digit > val){
      cnt++;
    }
    num /= 10;
  }
  return cnt;
}

int main(){
  int num, val;
  cin>>num>>val;
  cout<<countDigitsGreaterThan(num, val)<<endl;
  return 0;
}