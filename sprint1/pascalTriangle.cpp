// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1

#include<iostream>
using namespace std;

int factorial(int n){
  int fact = 1;
  for(int i=1; i<=n; i++){
    fact *= i;
  }
  return fact;
}

int binomialCoefficient(int n, int r){
  return factorial(n)/(factorial(r)*factorial(n-r));
}

void pascalTriangle(int n){
  for(int row=0; row<=n; row++){
    for(int col=0; col<=row; col++){
      cout<< binomialCoefficient(row, col)<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int n; 
  cin>>n; 
  pascalTriangle(n);
  return 0;
}