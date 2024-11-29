#include<iostream>
using namespace std;

void fibonacci(int n){
  if(n == 0){
    cout<<"0"<<endl;
    return;
  }
  int a=0, b=1;
  cout<<a<<" ";

  if(n >= 1){
    cout<<b<<" ";
  }
  while(true){
    int c = a + b;
    if(c > n) break;
    cout<<c<<" ";
    a = b;
    b = c;
  }
  cout<<endl;
}

int main(){
  int n;
  cout<<"Enter limit: ";
  cin>>n;

  if(n < 0){
    cout<<"The number entered must be a non-negative number";
    return 0;
  }
  fibonacci(n);

  return 0;
}