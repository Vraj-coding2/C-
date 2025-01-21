#include<iostream>
using namespace std;
int main(){
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
for(int i = 1;i <= n;i++){
  for(int j = 1;j <= i;j++){
    cout << " " << j;
  }
  cout << endl;
}
return 0;
 }
// Write a C++ Program to Print a Half-Pyramid Using Numbers  
// 1
// 12
// 123
// 1234
// 12345