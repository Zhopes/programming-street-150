#include<iostream>
using namespace std;

bool isPallindrome(string s){
  int l=0, r=s.size()-1;
  while(l<r){
    if(s[l] != s[r]){
      return false;
    }
    l++;r--;
  }
  return true;
}
int main(){
  string s;
  cin>>s;
  if(isPallindrome(s)){
    cout<<"Its a pallindrome"<<endl;
  }
  else{
    cout<<"Not a pallindrome"<<endl;
  }
  return 0;
}

