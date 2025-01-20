#include<iostream>
#include<vector>
using namespace std;

vector<int>generateFibonacci(int n){
  vector<int> fib;
  int a=1, b=1;
  fib.push_back(a);
  fib.push_back(b);
  for(int i=2; i<n; i++){      
    int c = a+b;
    fib.push_back(c);
    a=b;
    b=c;
  }
  return fib;
}

int main(){
  int size;
  cin>>size;
  int totalNum = size*size;
  vector<int>fib = generateFibonacci(totalNum);

  vector<vector<int>>matrix(size, vector<int>(size));
  int idx = 0;
  for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
      matrix[i][j] = fib[idx++];
    }
  }
  for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
