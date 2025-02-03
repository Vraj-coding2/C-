// Write a C++ Program to find both the largest and smallest number in an array list of integers.

#include<iostream>
using namespace std;

int main(){
  int len;
  cout << "enter the length:";
  cin >> len;
int arr[len];
int maximum = INT16_MIN,minimum = INT16_MAX;// this is a predefine value
for(int i = 0;i < len;i++){
   cout << "array" << '[' << i << "]:";
   cin >> arr[i];
}
for(int i = 0;i < len;i++){
    maximum = max(maximum,arr[i]);//this is a predefine function to find maximum number
    minimum = min(minimum,arr[i]);//this is a predefine function to find minimum number
}
cout << "maximum number is:" << maximum << endl;
cout << "minimum number is:" << minimum << endl;
return 0;
}

// output:
// array[0]:1
// array[1]:2
// array[2]:3
// maximum number is:3
// minimum number is:1