#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int num){
  if(num < 2) return false;
  for(int i = 2; i*i <= num; i++){
    if(num % i == 0){
      return false;
    }
  }
  return true;
}

void printPrimePattern(int rows){
  for(int i=1; i<=rows; i++){ //row loop
    int printed = 0, num = 2; // start with first prime number
    while(printed < i){ //print 'i' prime numbers in row 'i'
      if(isPrime(num)){
        cout<<num<< " ";
        printed++;
      }
      num++;
    }
    cout<<endl;
  }
}
//storing all primes in a list
void printPrimePattern2(int rows){
  vector<int> primes;
  int num = 2; //start checking for first prime

  //generate required primes
  while(primes.size() < rows){
    if(isPrime(num)){
      primes.push_back(num);
    }
    num++;
  }

  for(int i=0; i<rows; i++){ //row loop
    for(int j=0; j<=i; j++){ //print first (i+1) primes
      cout<<primes[j]<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int n;
  cin>>n;
  printPrimePattern2(n);
  return 0;
}
