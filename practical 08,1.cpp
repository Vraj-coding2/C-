// Write a C++ Program to Print Half-Pyramid Using Alphabets  
// A  
// B B  
// C C C  
// D D D D  
// E E E E E  

#include<iostream>
using namespace std;
int main(){
  char n;
  char ch = 'A';
  printf("Enter the chararcter:");
  scanf("%c",&n);
for(char i = 'A';i <= n;i++){
  for(char j = 'A';j <= i;j++){
    cout << " " << i;
  }
  cout << endl;
}
return 0;
}