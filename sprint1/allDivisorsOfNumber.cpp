#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> divisors;
  for(int i=1; i*i<=n; i++){
    if(n%i == 0){
      divisors.push_back(i);
      if(i != n/i){
        divisors.push_back(n/i);
      }
    }
  }
  sort(divisors.begin(), divisors.end());
  for(int i=0; i<divisors.size(); i++){
    cout<<divisors[i]<<" ";
  }
  return 0;
}