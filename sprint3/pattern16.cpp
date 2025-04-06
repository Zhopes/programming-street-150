// XOXOXO
// OXOXOX
// XOXOXO
// OXOXOX

#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if((i+j) % 2 == 0){
        cout<<"X";
      }
      else{
        cout<<"O";
      }
    }
    cout<<endl;
  }
  return 0;
}