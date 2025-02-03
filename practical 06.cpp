// Write a C++ program to find the sum of the given variables using function with default arguments and without default arguments.  
#include<iostream>
using namespace std;
void value(int a,int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void reference(int &a,int &b){
 int temp;
  temp = a;
  a = b;
  b = temp;
}


void address(int *a,int *b){
   int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
int main(){
  int a,b;
  cout << "Enter value of a:";
  cin >> a;

  cout << "Enter value of b:";
  cin >> b;
 
 cout << "using call by value:" << endl;
  value(a,b);
  
  cout << "a is :" << a << endl;
  cout << "b is :" << b << endl;

cout << "using call by refernce:" << endl;
reference(a,b);
 
  cout << "a is :" << a << endl;
  cout << "b is :" << b << endl;

  cout << "using call by address:" << endl;
address(&a,&b);
 
  cout << "a is :" << a << endl;
  cout << "b is :" << b << endl;
return 0;
}

// output
// Enter value of a:10
// Enter value of b:20
// using call by value:
// a is :10
// b is :20
// using call by refernce:
// a is :20
// b is :10
// using call by address:
// a is :10
// b is :20