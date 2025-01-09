#include<iostream>
using namespace std;

int length(string s){
  int cnt = 0;
  for(char ch : s){
    cnt++;
  }
  return cnt;
}

int main(){
  string s;
  cin>>s;
  cout<<length(s)<<endl;
  return 0;
}
