#include<iostream>
using namespace std;

double optimizedPower(double base, int exp){
  if(exp == 0) return 1;
  if(exp < 0) {
    base = 1/base;
    exp = -exp;
  }

  double ans = 1;
  while(exp > 0){
    if(exp % 2 == 1){
      ans *= base;
    }
    base *= base;
    exp /= 2;
  }
  return ans;
}

int power(int base, int exp){
  if(exp == 0) return 1;
  int ans = 1;
  while(exp--){
    ans *= base;
  }
  return ans;
}

int main(){
  // int base, exp;
  double base;
  int exp;
  cin>>base>>exp;
  // cout<<power(base, exp)<<endl;
  cout<<optimizedPower(base, exp)<<endl;
  return 0;
}