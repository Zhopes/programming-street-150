// 1234
// 1  1
// 1  1
// 1234
#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(i==1 || i == n){
        cout<<j;
      }
      else{
        if(j == 1 || j == n)
          cout<<1;
        else
          cout<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}