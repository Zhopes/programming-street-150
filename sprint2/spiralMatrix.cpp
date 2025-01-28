#include<iostream>
#include<vector>
using namespace std;

//Time complexity  : O(n^2)
//Space complexity : O(n^2)
void generateSpiralMatrix(int n){
  vector<vector<int>> matrix(n, vector<int>(n, 0));

  int top=0, bottom=n-1, left=0, right=n-1;
  int val = 1; //starting number

  while(top <= bottom && left <= right){
    //fill the top row
    for(int i=left; i<=right; i++){
      matrix[top][i] = val++;
    }
    top++;

    //fill the right column
    for(int i=top; i<=bottom; i++){
      matrix[i][right] = val++;
    }
    right--;

    //fill the bottom row(if any)
    if(top <= bottom){
      for(int i=right; i>=left; i--){
        matrix[bottom][i] = val++;
      }
      bottom--;
    }

    //fill the left column(if any)
    if(left <= right){
      for(int i=bottom; i>=top; i--){
        matrix[i][left] = val++;
      }
      left++;
    }
  }
  //print the matrix
  for(const auto& row : matrix){
    for(int val : row){
      cout<<val<< " ";
    }
    cout<<endl;
  }
}

int main(){
  int n;
  cin>>n;
  generateSpiralMatrix(n);
  return 0;
}