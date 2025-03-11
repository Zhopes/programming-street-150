#include<iostream>
#include<string>
using namespace std;


int longestWord(string s){
  int maxlen = 0, currlen = 0;

  for(int i=0; i<s.length(); i++){
    if(s[i] != ' '){
      currlen++;
    }
    else{
      maxlen = max(maxlen, currlen);
      currlen = 0;
    }
  }
  //final update in case the longest word is at the end of the string 
  maxlen = max(maxlen, currlen);
  return maxlen; 
}

int main(){
  string s;
  getline(cin, s);
  cout<<longestWord(s);
  return 0;
}