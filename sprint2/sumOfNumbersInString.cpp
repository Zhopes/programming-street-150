#include<iostream>
#include<string>
#include<sstream>
using namespace std;

// int findSumOfNumbersInString(const string& str){
//   int sum = 0, num = 0;
//   for(char ch : str){
//     if(isdigit(ch)){
//       num = num*10 + (ch - '0');
//     }
//     else{
//       sum += num;
//       num = 0;
//     }
//   }
//   sum += num;
//   return sum;
// }

int findSumOfNumbersInString(const string& str){
  stringstream ss(str);
  string word;
  int sum = 0;

  while(ss >> word){
    try{
      sum += stoi(word);
    }
    catch(invalid_argument&){
      continue;
    }
  }
  return sum;
}

int main(){
  string s;
  getline(cin, s);
  
  int result = findSumOfNumbersInString(s);
  cout<<result<<endl;
  return 0;
}
