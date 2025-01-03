#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n){
  int temp = n;
  int cnt = 0;
  while(temp > 0){
    cnt++;
    temp /= 10;
  }
  int num = n;
  int sum = 0;
  while(num > 0){
    int rem = num%10;
    sum += pow(rem, cnt);
    num /= 10;
  }
  return n == sum;
}

int main(){
  int a, b;
  cin>>a>>b;
  for(int i=a; i<=b; i++){
    if(isArmstrong(i)){
      cout<<i<<", ";
    }
  }
  return 0;
}
