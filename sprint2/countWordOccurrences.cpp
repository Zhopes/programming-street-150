#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int countWordOccurrences(const string& str, const string& word){
  stringstream ss(str);
  string temp;
  int count = 0;

  while(ss >> temp){
    if(temp == word){
      count++;
    }
  }
  return count;
}
int main(){
  string str, word;
  getline(cin, str);
  getline(cin, word);
  cout<<countWordOccurrences(str, word)<<endl;
  return 0;
}