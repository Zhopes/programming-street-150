#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int sum = 0;
  while(n>0){
    int rem = n%10;
    sum += rem*rem;
    n /= 10;
  }
  cout<<sum<<endl;
  return 0;
}