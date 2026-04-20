#include <iostream>
#include <string>

using namespace std;

int main()
{

  // this is for the data types basically 5 types

  // int
  int a = 1;
  float b = 22.43;
  double c = 345.645;
  string name = "Shubham Sing";
  char value = 's';
  bool status = true;

  cout << a << endl
       << b << endl
       << c << endl
       << name << endl
       << value << endl
       << status << endl;

  // declaring multiple varibles at a time .

  int d, e, f;
  // int g = h = i = 1 ; THIS IS THE WRONG WAY TO DO THAT

  // correct inline assignment
  int g = 1, h = 3, i = 5;

  cout << g << endl
       << h << endl
       << i << endl;

  // good identifiers example
  int noOfIteration = 4;

  // bad identifiers example
  // int i = 4;

  // using the constants so that the value will not be changed
  const int ballCount = 2;

  string nameInput;
  cout << "plase enter your name ";
  // cin >> "plase enter your name "; I USED THE PYTHON LIKE SYNTAX
  cin >> nameInput;   // this will take the first string only 
  cout << nameInput;

  return 0; // I HAVE MADE A NOT USED THE SEMICOLON 
}