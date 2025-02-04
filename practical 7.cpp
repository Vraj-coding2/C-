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
int n;
cout << "Enter the number:";
cin >> n;
student s1[n];
float avg[n];
float total[n];
for(int i = 1;i <= n;i++){
  cout << "student :" << i << endl;
cout << "sub 1:";
cin >> s1[i].sub1;

cout << "sub 2:";
cin >> s1[i].sub2;

cout << "sub 3:";
cin >> s1[i].sub3;
cout << "..........." << endl;
}

for(int i = 1;i <= n;i++){
  total[i] = s1[i].sub1+s1[i].sub2+s1[i].sub3;
  avg[i] = total[i]/3;
}

for(int i = 1;i <= n;i++){
  cout << "student :" << i << endl;
  cout << "Student total :" << total[i] << endl;
  cout << "Student average is :"<< avg[i] << endl;
  cout << "..........." << endl; 
}

  return 0;
}
