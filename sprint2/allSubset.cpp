#include<iostream>
#include<vector>
using namespace std;

//recursive function to generate all subsets
void solve(int i, vector<int>& nums, vector<int>& temp, vector<vector<int>>& result){
  //base case: if we have processed all elements
  if(i >= nums.size()){
    result.push_back(temp);
    return;
  }
  //exclude the current element and move to the next
  solve(i+1, nums, temp, result);
  //include the current element in the subset
  temp.push_back(nums[i]);
  solve(i+1, nums, temp, result);
  //backtrack to remove the last added element
  temp.pop_back();
}

//function to generate all subsets
vector<vector<int>> allSubsets(vector<int>& nums){
  vector<int> temp;
  vector<vector<int>> result;
  solve(0, nums, temp, result);
  return result;
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0; i<n; i++){
    cin>>nums[i];
  }
  //get all subsets
  vector<vector<int>> result = allSubsets(nums);
  cout<<"[";
  for(const auto& subset : result){
    cout<<"[";
    for(size_t i=0; i < subset.size(); i++){
      cout<<subset[i];
      if(i != subset.size() - 1){
        cout<<",";
      }
    }
    cout<<"]";
  }
  cout<<"]";
  return 0;
}