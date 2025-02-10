#include<iostream>
#include<vector>
using namespace std;


bool  isPalindrome(int num){
  int original = num, reversed = 0;
  while(num > 0){
    reversed = reversed * 10 + (num % 10);
    num /= 10;
  }
  return original == reversed;
}

vector<int> findPalindromes(int start, int end){
  vector<int> palindromes;
  for(int i=start; i<=end; i++){
    if(isPalindrome(i)){
      palindromes.push_back(i);
    }
  }
  return palindromes;
}

int main(){
  int start, end;
  cin>>start>>end;
  vector<int> palindromes = findPalindromes(start, end);
  cout<<'[';
  for(size_t i=0; i<palindromes.size(); i++){
    cout<<palindromes[i];
    if(i < palindromes.size() - 1){
      cout<<", ";
    }
  }
  cout<<']'<<endl;
  return 0;
}