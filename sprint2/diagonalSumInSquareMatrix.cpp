#include<iostream>
using namespace std;

int diagonalSum(int arr2D[][100], int n){
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr2D[i][i];
  }
  return sum;
}

int main(){
  int n;
  cin>>n;
  int arr2D[100][100];
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin>>arr2D[i][j];
    }
  }
  cout<<diagonalSum(arr2D, n)<<endl;
  return 0;
}