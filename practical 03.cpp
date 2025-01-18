// Write a C++ Program to find both the largest and smallest number in an array list of integers.

#include<iostream>
using namespace std;

int main(){
int arr[] = {12,34,50,1,0};
int length = sizeof(arr)/sizeof(arr[0]);
int maximum = INT16_MIN,minimum = INT16_MAX;// this is a predefine value
for(int i = 0;i < length;i++){
    maximum = max(maximum,arr[i]);//this is a predefine function to find maximum number
    minimum = min(minimum,arr[i]);//this is a predefine function to find minimum number
}
cout << "maximum number is:" << maximum << endl;
cout << "minimum number is:" << minimum << endl;
return 0;
}