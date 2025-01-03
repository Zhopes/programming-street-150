// 1  
// 2 3  
// 4 5 6  

#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int val=1;
  for(int row=1; row<=n; row++){
    for(int col=1; col<=row; col++){
      cout<<val<<" ";
      val++;
    }
    cout<<endl;
  }
}