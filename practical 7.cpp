//Write a C++ program to find average marks of three subjects of N students in a class using Structure.
#include<iostream>
using namespace std;

struct student
{
  int sub1;
  int sub2;
  int sub3;
};

int main(){
student s1;
float avg,total;
cout << "sub 1:";
cin >> s1.sub1;

cout << "sub 2:";
cin >> s1.sub2;

cout << "sub 3:";
cin >> s1.sub3;

total = s1.sub1 + s1.sub2 + s1.sub3;
avg = total/3;
cout << "Average is :" << avg << '%';
  return 0;
}