#include<iostream>
using namespace std;

int lcm(int a, int b){
    int maxi = max(a, b);
    int mini = min(a, b);
    for(int i=maxi; ; i+=maxi){
      if(i % mini == 0){
        return i;
      }
    }
}

int main(){
  int a, b;
  cin>>a>>b;
  cout<<lcm(a, b)<<endl;
  return 0;
}