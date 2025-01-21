#include<iostream>
#include<cmath>
using namespace std;

bool isPerfectSquare(int n){
  if(n < 0) return false;
  int root = sqrt(n);
  return (root*root == n);
}

int main(){
  int s, e;
  cin>>s>>e;
  int sum = 0;
  for(int i=s; i<=e; i++){
    if(isPerfectSquare(i)){
      sum += i;
    }
  }
  cout<<sum<<endl;
  return 0;
}