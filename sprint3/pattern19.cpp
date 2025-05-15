// CCC
//  BB
//   A

#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  char ch = 'A' + n -1;
  for(int i=0; i<n; i++){
    //space
    for(int s=0; s<i; s++){
      cout<<" ";
    }
    //print character (n-i) times
    for(int j=0; j<n-i; j++){
      cout<<ch;
    } 
    cout<<endl;
    ch--; //move to previous alphabet
  }
  return 0;
}