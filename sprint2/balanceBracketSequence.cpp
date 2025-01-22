#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isBalancedSequence(string s){
  stack<char> st;

  for(char ch : s){
    if(ch == '{' || ch == '[' || ch == '('){
      st.push(ch);
    }
    else if(ch == '}' || ch == ']' || ch == ')'){
      if(st.empty()){
        return false;
      }
      if((ch == '}' && st.top() == '{')||
      (ch == ']' && st.top() == '[')||
      (ch == ')' && st.top() == '(')){
        st.pop();
      }
      else{
        return false;
      }
    }
  }
  return st.empty();
  }

int main(){
  string s;
  cin>>s;
  if(isBalancedSequence(s)){
    cout<<"True"<<endl;
  }
  else{
    cout<<"False"<<endl;
  }
  return 0;
}