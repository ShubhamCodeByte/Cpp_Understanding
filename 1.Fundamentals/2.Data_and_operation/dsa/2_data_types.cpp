/*The Challenge: The "Bio-Data" Parser
Task:
Write a C++ program that takes the following 4 inputs from a user and prints them back in a single formatted line. You must use the most appropriate data type for each based on the theory:

An initial (e.g., 'A')

An age (e.g., 25)

A precise GPA (e.g., 3.985)

Whether they passed or not (use 1 or 0 for bool input)

Constraints:

Use char, int, double, and bool.

Take all inputs using cin.

Output them separated by spaces.*/

#include <iostream>
using namespace std;

int main()
{
  // 1. Declare variables for char, int, double, and bool
  char initial = 'A';
  int marks = 90;
  double Percent = 68.34;
  bool result = false;

  // 2. Input all 4 values (cin >> ...)
  cout << "Enter initial : ";
  cin >> initial;
  cout << "Enter marks : ";
  cin >> marks;
  cout << "Enter Percent : ";
  cin >> Percent;
  cout << "Enter result : ";
  cin >> result;

  // 3. Output them in one line (cout << ...)
  cout << "initial : " << initial << "marks : " << marks << "Percent : " << Percent << "result : "
       << result << "\n";
  return 0;
}