#include<iostream>
using namespace std;

int fibonacci(int n){
  int a=0, b=1, c;
  for(int i=1; i<n; i++){
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}

int main(){
  int pos;
  cin>>pos;
  if(pos <= 0){
    cout<<"Invalid input"<<endl;
  }
  else{
    cout<<"fibonacci number at position "<<pos<<": "<<fibonacci(pos)<<endl;
  }
  return 0;
}