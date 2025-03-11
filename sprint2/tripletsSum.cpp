#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void twoSum(vector<int>& arr, int target, int i, int j, vector<vector<int>>& result){
  while(i<j){
    int sum = arr[i] + arr[j];
    if(sum > target){
      j--;
    }
    else if(sum < target){
      i++;
    }
    else{
      result.push_back({-target, arr[i], arr[j]});

      while(i<j && arr[i] == arr[i+1]) i++;
      while(i<j && arr[j] == arr[j-1]) j--;

      i++; j--;
    }
  }
}

vector<vector<int>> tripletSum(vector<int>& arr){
  int n = arr.size();
  if(n < 3) return {};

  vector<vector<int>> result;
  sort(arr.begin(), arr.end());

  for(int i=0; i<n-2; i++){
    //skip duplicate elements
    if(i>0 && arr[i] == arr[i-1]){
      continue;
    }

    int target = -arr[i];
    twoSum(arr, target, i+1, n-1, result);
  }
  return result;
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n);

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  vector<vector<int>> result = tripletSum(arr);
  // cout<<"[";
  // for(const auto& triplet : result){
  //   cout<<"["<<triplet[0]<<", "<<triplet[1]<<", "<<triplet[2]<<"],"; 
  // }
  // cout<<"]";     //O/P:[[-1, -1, 2], [-1, 0, 1],]


  cout<<"[";
  for(size_t i = 0; i<result.size(); i++){
    cout<<"["<<result[i][0]<<", "<<result[i][1]<<", "<<result[i][2]<<"]";
    if(i < result.size()-1){
      cout<<", ";
    }
  }
  cout<<"]";
  return 0;
}