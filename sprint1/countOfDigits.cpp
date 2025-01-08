#include<iostream>
using namespace std;

int main(){
  int n, digit;
  cin>>n>>digit;
  int count = 0;
  while(n>0){
    if(digit == n%10){
      count++;
    }
    n /= 10;
  }
  cout<<count;
}