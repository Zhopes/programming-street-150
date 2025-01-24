#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<map>
using namespace std;

//O(nlogn)
// int longestConsecutiveSequence(int arr[], int n){
//   if(n == 0) return 0;

//   sort(arr, arr+n);
//   int ans = 1, cnt = 1;

//   for(int i=1; i<n; i++){
//     if(arr[i] == arr[i-1] + 1){
//       cnt++;
//     }
//     else if(arr[i] != arr[i-1]){ 
//       cnt=1;
//     }
//     ans = max(ans, cnt);
//   }
//   return ans;
// }



//O(n)
int longestConsecutiveSequence(int arr[], int n){
  unordered_set<int> numSet;
  for(int i=0; i<n; i++){
    numSet.insert(arr[i]);
  }
  int longestStreak = 0;

  for (int num : numSet) {
      // Check if it's the start of a sequence
      if (numSet.find(num - 1) == numSet.end()) {
          int currentNum = num;
          int currentStreak = 1;

          // Count the length of the sequence
          while (numSet.find(currentNum + 1) != numSet.end()) {
              currentNum += 1;
              currentStreak += 1;
          }

          longestStreak = max(longestStreak, currentStreak);
      }
  }
  return longestStreak;
}


int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<longestConsecutiveSequence(arr, n)<<endl;
  return 0;
}