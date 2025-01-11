#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

string longestSubstring(string s){
  int n = s.size();
  int i=0, j=0;
  int maxlen = 0, startIdx = 0;
  unordered_map<char, int> mp;

  while(j < n){
    mp[s[j]]++; // Add the current character to the map
    
    // If there are duplicate characters, shrink the window
    while(mp.size() < j-i+1){
      mp[s[i]]--;
      if(mp[s[i]] == 0){
        mp.erase(s[i]); // Remove character completely from the map
      }
      i++;  // Shrink the window from the left
    }
    // Update the longest substring if a valid one is found
    if(j-i+1 > maxlen){
      maxlen = j-i+1;
      startIdx = i;
    }
    j++; // Expand the window to the right
  }
  return s.substr(startIdx, maxlen);
}

int main(){
  string s;
  cin>>s;
  cout<<longestSubstring(s)<<endl;
  return 0;
}