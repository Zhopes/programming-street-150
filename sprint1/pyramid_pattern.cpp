//     *
//    ***
//   *****
//  *******
// *********
#include<iostream>
using namespace std;


int main(){
  int n;
  cin>>n;
  for(int row=1; row<=n; row++){
      //space
      for(int space = n-row; space>0; space--){
        cout<<" ";
      }
      //star
      for(int star = 1; star<=2*row-1; star++){
        cout<<"*";
      }
      cout<<endl;
  }
}