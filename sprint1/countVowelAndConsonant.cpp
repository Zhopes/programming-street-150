#include<iostream>
using namespace std;

int main(){
  string str;
  getline(cin, str);
  int vowel=0, consosnant=0;

  for(char ch : str){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
      vowel++;
    }
    else{
      consosnant++;
    }
  }
  cout<<"vowel "<<vowel<<" "<<"consonant "<<consosnant<<endl;
  return 0;
}