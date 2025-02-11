#include<iostream>
#include<sstream>
using namespace std;

int countWordOccurences(const string& str, const string& target){
  stringstream ss(str);
  string word;
  int count = 0;

  while(ss >> word){
    if(word == target){
      count++;
    }
  }
  return count;
}

int main(){
  string input,target;
  getline(cin, input);
  cin>>target;
  cout<<countWordOccurences(input, target);
  return 0;
}