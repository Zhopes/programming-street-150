#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums){
  int currOnes = 0, maxOnes = INT_MIN;
  for(int num : nums){
    currOnes += num;
    maxOnes = max(currOnes, maxOnes);
    if(num == 0){
      currOnes = 0; 
    }
  }
  return maxOnes;
}
int main(){
  vector<int> nums = {1,1,0,1,1,1};
  cout<<findMaxConsecutiveOnes(nums);
  return 0;
}