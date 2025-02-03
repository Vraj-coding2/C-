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
 student(int r){ // this is a constructor for parametrized
  rollno = r;
 }

 student(student &s1){
  rollno = s1.rollno;
  cout << "student rollno is :" << rollno;
 }
};
int main(){ 
 student s1; 
int rollno = 10;
student s2(rollno); // calling roll no constructor
student s3(s2); // calling copy constructor passing the object

return 0;
}