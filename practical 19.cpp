// Write a C++ Program to implement default parameter constructor.

#include<iostream>
using namespace std;
class student{
  public:
student(){ // default constructor
  cout << "...This is a addition function..." << endl;
 }
};
int main(){
student s1;
int a,b;
cout << "Enter the value a:";
cin >> a;

cout << "Enter the value b:";
cin >> b;

cout << "addition is :" << a+b;
return 0;
}