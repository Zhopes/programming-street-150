#include<iostream>
#include<vector>
#include<cstdlib> //required for rand() and srand()
#include<ctime>   //required for time() to seed srand()
using namespace std;

void generateMatrix(int r, int c){
  vector<vector<int>> matrix(r, vector<int>(c));
  srand(time(0));  // Seed for random number generation to ensure different outputs on each run
    

  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
      matrix[i][j] = rand()%10;
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int r, c;
  cin>>r>>c;

  generateMatrix(r, c);
  return 0;
}