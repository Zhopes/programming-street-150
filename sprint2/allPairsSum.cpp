#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

vector<pair<int, int>> optimizedAllPairSum(vector<int> &arr, int target){
  vector<pair<int, int>> result;

  unordered_set<int> seen;
  unordered_set<int> usedPairs;

  for(int num : arr){
    int complement = target - num;
    
    if(seen.count(complement) && !usedPairs.count(min(num, complement))){
      result.push_back({min(num, complement), max(num, complement)});
      usedPairs.insert(min(num, complement));
    }
    seen.insert(num);
  }
  return result;
}

// //O(nlogn)
// vector<pair<int, int>>allPairSum(vector<int> arr, int target){
//   vector<pair<int, int>> result;
//   sort(arr.begin(), arr.end());
//   int l=0, r=arr.size()-1;

//   while(l < r){
//     int sum = arr[l] + arr[r];
//     if(sum == target){
//       result.push_back({arr[l], arr[r]});
//       l++; r--;
//     }
//     else if(sum < target){
//       l++;
//     }
//     else{
//       r--;
//     }
//   }
//   return result;
// }

int main(){
  int n; 
  cin>>n;
  vector<int> arr(n);

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int target;
  cin>>target;

  // vector<pair<int, int>> result = allPairSum(arr, target);
  vector<pair<int, int>> result = optimizedAllPairSum(arr, target);
  
  for(const auto&p : result){
    cout<<"("<<p.first<<", "<<p.second<<")"<<", ";
  }

  return 0;
}