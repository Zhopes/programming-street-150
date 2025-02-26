#include<iostream>
#include<vector>
using namespace std;

//using Kadane's algorithm
int maxSubArray(vector<int>& nums){
  int currSum = 0, maxSum = INT_MIN;
  for(int num : nums){
    currSum += num;
    maxSum = max(currSum, maxSum);
    if(currSum < 0){
      currSum = 0;
    }
  }
  return maxSum;
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0; i<n; i++){
    cin>>nums[i];
  }
  cout<<maxSubArray(nums)<<endl;
  return 0;
}