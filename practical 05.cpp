// Write a C++ program to find the sum of the given variables using function with default arguments and without default arguments.  
#include<iostream>
using namespace std;

void sum(int a = 10,int b = 20){
  cout << "Sum is :" << a+b << endl;
}

void sum1(int a,int b){
  cout << "second Sum is :"<<a+b << endl;
}

int main(){
  int a,b;
  cout << "Enter value of a:";
  cin >> a;

  cout << "Enter value of b:";
  cin >> b;

  sum();
  sum1(a,b);

return 0;
}

// output
// Enter value of a:20
// Enter value of b:30
// Sum is :30
// second Sum is :50