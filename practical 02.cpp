// Write a C++ program to display matrix multiplication table using nested for loop.  

#include<iostream>
using namespace std;
 
 int main(){
 int len;
  cout << "Enter the matrix length:";
  cin >> len;
 int matrix[len][len];
 int matrix2[len][len];
 int finalmatrix[len][len];

  for (int i = 0; i < len; i++){
    for(int j = 0;j < len;j++)
  {
   cout << "matrix" << '[' << i << ']' << '[' << j << ']' << ':';
   cin >> matrix[i][j];
  }
 } 


 for (int i = 0; i < len; i++){
    for(int j = 0;j < len;j++)
  {
   cout << "matrix2" << '[' << i << ']' << '[' << j << ']' << ':';
   cin >> matrix2[i][j];
  }
 } 


  for (int i = 0; i < len; i++){
    for(int j = 0;j < len;j++)
  {
   finalmatrix[i][j] = matrix[i][j] * matrix2[i][j];
  }
 } 

  for (int i = 0; i < len; i++){
    for(int j = 0;j < len;j++)
  {
   cout << finalmatrix[i][j] << " ";
  }
  cout << endl;
 } 

 return 0;
 }

// output:
// Enter the matrix length:2
// matrix[0][0]:1
// matrix[0][1]:2
// matrix[1][0]:1
// matrix[1][1]:2
// matrix2[0][0]:1
// matrix2[0][1]:2
// matrix2[1][0]:1
// matrix2[1][1]:2
// 1 4 
// 1 4