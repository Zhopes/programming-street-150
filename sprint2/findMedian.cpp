#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double findMedian(vector<int> &nums){
  sort(nums.begin(), nums.end());
  int n = nums.size();

  if(n % 2 == 1){
    return nums[n/2];
  }
  else{
    return (nums[n/2 - 1] + nums[n/2]) / 2.0;
  }
}

int main(){
  int n;
  cin>>n;

  vector<int> nums(n);
  for(int i=0; i<n; i++){
    cin>>nums[i];
  }

  cout<<findMedian(nums)<<endl;
  return 0;
}