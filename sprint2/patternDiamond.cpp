#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  for(int row=1; row<=(n+1)/2; row++){
    for(int space = 1; space <= (n+1)/2-row; space++){
        cout<<" ";
    }
    for(int star = 1; star <= 2*row - 1; star++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int row=(n+1)/2-1; row>=1; row--){
    for(int space = 1; space <= (n+1)/2-row; space++){
        cout<<" ";
    }
    for(int star = 1; star <= 2*row - 1; star++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}