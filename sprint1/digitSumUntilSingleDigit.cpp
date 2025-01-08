#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n; 
  if(n <= 9){
    cout<<n<<endl;
  }
  else{
    while(n > 9){
      int temp = n;
      int sum = 0;
      while(temp > 0){
        sum += temp%10;
        temp /= 10;
      }
      n = sum;
    }
    cout<<n<<endl;
  }
  return 0;
}

//Optimized Approach
// int main(){
//   int n; 
//   cin>>n;
//   if(n <= 9) cout<<n<<endl;
//   else{
//     cout<<1+(n-1)%9<<endl;
//   }
//   return 0;
// }