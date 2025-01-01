#include<iostream>
using namespace std;

//Bruteforce=>TC:O(min(a,b))
int gcd(int a, int b){
  int mini = min(a, b);
  int gcd = 1; 
  for(int i=1; i<=mini; i++){
    if(a%i==0 && b%i==0){
      gcd = i;
    }
  }
  return gcd;
}
//Euclidean=>TC:O(log(min(a,b)))
int gcd2(int a, int b){
  if(b==0) return a;
  return gcd2(b, a%b);
}

int main(){
  int a, b;
  cin>>a>>b;
  cout<<gcd(a, b)<<endl;
  cout<<gcd2(a, b)<<endl;
  return 0;
}