#include<iostream>
using namespace std;

double sumOfSeries(int n){
  double sum = 0;
  while(n>0){
    sum += 1.0/n;
    n--;
  }
  return sum;
}

int main(){
  int n; cin>>n;
  cout<<sumOfSeries(n)<<endl;
  return 0;
}