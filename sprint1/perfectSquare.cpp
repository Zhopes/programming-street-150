#include<iostream>
using namespace std;

bool perfectSquare(int n){
  for(int i=1; i*i<=n; i++){
    if(i*i == n){
      return true;
    }
  }
  return false;
}

int main(){
  int num;
  cin>>num;
  cout<<perfectSquare(num)<<endl;
  return 0;
}