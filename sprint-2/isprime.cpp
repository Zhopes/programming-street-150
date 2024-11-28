#include<iostream>
using namespace std;

int main(){
  int num;
  cin>>num;

  bool isprime = true;
  for(int i=2; i*i<=num; i++){
    if(num % i == 0){
      isprime = false;
      break;
    }
  }
  if(num <= 1){
    isprime = false;
  }
  if(isprime){
    cout<<"Prime"<<endl;
  }
  else{
    cout<<"Not Prime"<<endl;
  }
  return 0;
}