#include<iostream>
using namespace std;

int sumOfDigits(int num){
  int sum = 0;
  while(num > 0){
    sum += num%10;
    num /= 10;
  }
  return sum;
}

int main(){
  int num1, num2;
  cin>>num1>>num2;
  int prod = num1*num2;
  int result = sumOfDigits(prod);
  cout<<result<<'\n';
  return 0;
}