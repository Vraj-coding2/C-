// Write a C++ program to invoke Constructor and Destructor.  

#include<iostream>
using namespace std;
class student{
  int rollno;
  string name;
  public:
student(){ // default constructor
  cout << "...This is default constructor..." << endl;
}
~ student(){ //destructor constructor
  cout << "This is a distructor constructor:" << endl;
 }
};
int main(){ 
  student s1; 
return 0;
}