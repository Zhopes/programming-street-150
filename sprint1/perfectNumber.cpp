#include<iostream>
using namespace std;

bool isPerfect(int num){
  int sum = 1;
  for(int i=2; i*i<=num; i++){
    if(num % i == 0){
      sum += i;
      if(i != num/i){
        sum += num/i;
      }
    }
  }
  return num==sum;
}

int main(){
  int n;
  cin>>n;
  if(isPerfect(n)){
    cout<<"Perfect number"<<endl;
  }
  else{
    cout<<"Not a perfect number"<<endl;
  }
  return 0;
}