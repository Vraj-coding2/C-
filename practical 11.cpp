/* Write a program Illustrating Class Declarations, Definition, and 
Accessing Class Members.*/

#include<iostream>
using namespace std;
class Student { // This is class declartion
    public: // This is class defination
    Student(){
      cout << "...This is a student deatils..." << endl;
    }
 void printdata(string name,int rollno){
  cout << "name is : " << name << endl;
  cout << "Roll number is :"<< rollno;
 }

};
int main(){
 Student s1; //accessing . to the class member
 string name;
 int rollno;
 cout << "enter the name :";
 cin >> name;

  cout << "enter the roll no :";
 cin >> rollno;

 s1.printdata(name,rollno);

return 0;
}