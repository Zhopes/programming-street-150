#include<iostream>
using namespace std;

int main(){
  int arr[] = {1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(int);
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr[i];
  }
  cout<<"sum: "<<sum<<endl;
  return 0;

}