#include<iostream>
#include<algorithm>
using namespace std;

int medianOfArray(int arr[], int n){
  sort(arr, arr+n);
  if(n%2){
    return arr[n/2];
  }
  else{
    return (arr[(n/2)-1] + arr[n/2])/2;
  }

}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<medianOfArray(arr, n)<<endl;
  return 0;
}