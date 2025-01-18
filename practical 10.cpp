/* Create a class named 'Student' with a string variable 'name' and an 
integer variable 'roll_no'. Assign the value of roll_no as '2' and that of 
 name as "Ajay" by creating an object of the class Student.*/

#include<iostream>
using namespace std;
class Student { //This is a class 
    public: // This is a access sprcifier
    Student(){ // This is a constructor 
      cout << "...This is a student deatils..." << endl;
    }
  string name; // class member
  int rollno;
};
int main(){
 Student s1; // s1 is a object 
 cout << "enter the name :";
 cin >> s1.name; // . to access the class member

  cout << "enter the roll no :";
 cin >> s1.rollno;

 cout << "name is :" << s1.name << endl;
 cout << "roll no is :"<< s1.rollno;

return 0;
}