#include<iostream>
using namespace std;

int gcd(int a, int b){
  if(b == 0) return a;
  return gcd(b, a%b);
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  int i;
  for(i=0; i<n; i++){
    cin>>arr[i];
  }
  int ans = arr[0];
  for(int i=1; i<n; i++){
    ans = gcd(ans, arr[i]);
  }

  cout<<ans<<endl;
  return 0;
}