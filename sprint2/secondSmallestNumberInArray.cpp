#include<iostream>
using namespace std;

int secondSmallest(int arr[], int n){
  if(n < 2) 
    return -1;

  int first = INT_MAX;
  int second = INT_MAX;

  for(int i=0; i<n; i++){
    if(arr[i] < first){
      second = first;
      first = arr[i];
    }
    else if(arr[i] > first && arr[i]< second)
      second = arr[i];
  }

  if(second == INT_MAX)
    return -1;

  return second;
}

int main(){
  int n;
  cin>>n; 

  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  cout<<secondSmallest(arr, n)<<endl;
  return 0;
}

