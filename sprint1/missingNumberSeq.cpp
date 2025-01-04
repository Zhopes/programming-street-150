#include<iostream>
using namespace std;

int main(){
  //sorted sequence[1...n]
  int arr[] = {1,3,4,5,7,8};
  int n = sizeof(arr)/sizeof(int);

  int maxi=INT_MIN;
  for(int i=0; i<n;i++){
    if(maxi < arr[i]){
      maxi = arr[i];
    }
  }
  int k = 0;
  for(int i=1; i<=maxi; i++){
    if(arr[k] == i){
      k++;
    }
    else{
      cout<<i<<" ";
    }
  }
  return 0;
}
