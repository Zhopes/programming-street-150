#include<iostream>
#include<string>
using namespace std;

string reverse(string str){
  string ans="";
  for(int i=str.size()-1; i>=0; i--){
    ans += str[i];
  }
  return ans;
}
string reverse2(string str){
  int l=0, r=str.size()-1;
  while(l<r){
    swap(str[l], str[r]);
    l++;r--;
  }
  return str;
}

int main(){
  string s;
  cin>>s;
  cout<<reverse(s)<<endl;
  cout<<reverse2(s)<<endl;
  return 0;
}