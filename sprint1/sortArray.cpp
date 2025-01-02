#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
      }
    }
  }
}

void bubbleSortOptimized(int arr[], int n){
  bool flag=true;
  for(int i=0; i<n-1 && flag; i++){
    flag=false;
    for(int j=0; j<n-i-1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
        flag=true;
      }
    }
  }
}

int main(){
  int arr[] = {5, 7, 0, -12, 1, 34};
  int n = sizeof(arr)/sizeof(int);
  bubbleSort(arr, n);
  // bubbleSortOptimized(arr, n);
  for(auto i : arr){
    cout<<i<<" ";
  }
  return 0; 
}

