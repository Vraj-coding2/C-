// Write a C++ Program to Print Half-Pyramid Using Alphabets  
// A  
// B B  
// C C C  
// D D D D  
// E E E E E  

#include<iostream>
using namespace std;
int main(){
  char ch;
  printf("Enter the chararcter:");
  scanf("%c",&ch);
for(char i = 'A';i <= ch;i++){
  for(char j = 'A';j <= i;j++){
    cout << " " << i;
  }
  cout << endl;
}
return 0;
}