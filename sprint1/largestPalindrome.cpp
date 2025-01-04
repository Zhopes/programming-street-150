#include<iostream>
#include<cmath>
using namespace std;

// bool isPalindrome(string s){
//   int l=0, r=s.size()-1;
//   while(l<r){
//     if(s[l] != s[r]){
//       return false;
//     }
//     l++;r--;
//   }
//   return true;
// }

// string largestPalindrome(string s){
//   int n = s.size();
//   string res = "";
//   int maxSize = 0;

//   for(int i=0; i<n; i++){
//     for(int j=i; j<n; j++){
//       string temp = "";
//       for(int k=i; k<=j; k++){
//         temp += s[k];
//       }
//       if(isPalindrome(temp)){
//         if(temp.size() > maxSize){
//           maxSize = temp.size();
//           res = temp;
//         }
//       }
//     }
//   }
//   return res;
// }

// int main(){
//   string s;
//   cin>>s;
//   cout<<largestPalindrome(s)<<endl;
  
//   return 0;
// }


//optimized TC:O(n2)

bool isPalindrome(const string &s, int l, int r){
  // int l=0, r=s.size()-1;
  while(l<r){
    if(s[l] != s[r]){
      return false;
    }
    l++;r--;
  }
  return true;
}

string largestPalindromeOptimized(string s){
  int n = s.size();
  string res = "";
  int maxSize = 0;

  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      if(isPalindrome(s, i, j)){
        int len = j-i+1;
        if(len > maxSize){
          maxSize = len;
          res = s.substr(i, len);
        }
      }
    }
  }
  return res;
}

int main(){
  string s;
  cin>>s;
  cout<<largestPalindromeOptimized(s)<<endl;
  
  return 0;
}
