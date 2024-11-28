#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int num; 
  cin>>num;

  int originalNum = num;
  int lenCount = 0, sum = 0;

  int temp = num;
  while(temp > 0){
    lenCount++;
    temp /= 10;
  }

  temp = num;
  while(temp > 0){
    int rem = temp % 10;
    sum += pow(rem, lenCount);
    temp /= 10;
  }

  if(sum == originalNum){
    cout<<"armstrong number"<<endl;
  }
  else{
    cout<<"not armstrong number"<<endl;
  }

  return 0;
}