
#include<iostream>
using namespace std;

int main(){
  int len;
  cout << "enter the length:";
  cin >> len;
int arr[len],Even[len],odd[len];
for(int i = 0;i < len;i++){
   cout << "array" << '[' << i << "]:";
   cin >> arr[i];
}
int k = 0,h = 0;
for(int i = 0;i < len;i++){
  if(arr[i] % 2 == 0){
    Even[k] = arr[i];
    k++;
  }else{
    odd[h] = arr[i];
    h++;
  }
}
cout <<"Even number array:" << '[';
for(int i = 0;i < k;i++){
  cout << " " << Even[i] ;
}
cout << ']' << endl;


cout <<"Odd number array:" << '[';
for(int i = 0;i < h;i++){
  cout << " " << odd[i];
}
cout << ']';
return 0;
}

//output
// array[0]:1
// array[1]:2
// array[2]:3
// array[3]:4
// array[4]:5
// Even number array:[ 2 4]
// Odd number array:[ 1 3 5]