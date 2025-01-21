// Write a C++ Program to implement constructor overloading concept.  

#include<iostream>
using namespace std;
class student{
  int rollno;
  string name;
  public:
student(){ // default constructor
  cout << "...This is a student Details function..." << endl;
}
 student(int r){ // this is a constructor overloading with same name but different parameter
  rollno = r;
  cout << "Student roll no is :" << rollno;
 }

 student(string nm){
  name = nm;
  cout << "student name is :" << name;
 }
};
int main(){ 
  student s1; 
int rollno = 10;
string name = "vraj";
student s2(rollno); // calling roll no constructor

return 0;
}