// Pascal Triangle
//    1
//   1 1
//  1 2 1
// 1 3 3 1

#include<iostream>
using namespace std;

int  binomial_coefficient(int n, int r){
  int ans = 1;
  if(r > n-r)
    r = n-r;

  for(int i=0; i<r; i++){
    ans *= (n-i);
    ans /= (i+1);
  }
  return ans;
}

int main(){
  int n;
  cin>>n;

  for(int i=0; i<n; i++){
    //print space
    for(int space=0; space<n-i-1; space++){
      cout<<" ";
    }
    for(int j=0; j<=i; j++){
      cout<<binomial_coefficient(i, j)<<" ";
    }
    cout<<endl;
  }
  return 0;
}