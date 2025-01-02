#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(int);
  int maxi=INT_MIN;
  int mini=INT_MAX;
  for(int i=0; i<n; i++){
    if(arr[i] > maxi){
      maxi = arr[i];
    }
    if(arr[i] < mini){
      mini = arr[i];
    }
  }
  cout<<"largest "<<maxi<<" "<<"smallest "<<mini<<endl;
  return 0;
}