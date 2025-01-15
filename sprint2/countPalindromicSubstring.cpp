#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Time Complexity: O(n3)
bool isPalindromic(string &s, int l, int r){
  int n = s.size();
  if(n == 1) return true;
  
  while(l<r){
    if(s[l] != s[r]){
      return false;
    }
    l++; r--;
  }
  return true;
}

int countPalindromicSubstring(string s){
  vector<string> v;
  int n = s.size();
  int count = 0;
  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      if(isPalindromic(s, i, j)){
        count++;
      }
    }
  }
  return count;
}

int main(){
  string s;
  cin>>s;
  cout<<countPalindromicSubstring(s)<<endl;
  return 0;
}