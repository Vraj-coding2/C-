#include<iostream>
using namespace std;
int main(){
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
for(int i = 1;i <= n;i++){
  for(int k = n-1;k >= i;k--){
    cout << " ";
  }
  for(int j = 1;j <= i;j++){
    cout << "* ";
  }
  cout << endl;
}

for(int i = n-1;i >= 1;i--){
  for(int k = i;k <= n-1;k++){
    cout << " ";
  }
  for(int j = 1;j <= i;j++){
    cout << "* ";
  }
  cout << endl;
}
return 0;
}