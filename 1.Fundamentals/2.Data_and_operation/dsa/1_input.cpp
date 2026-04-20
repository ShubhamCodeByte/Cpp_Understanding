#include <iostream>
using namespace std;

int main()
{
  // 1. Declare variables
  int a, b, c;

  // 2. Get 3 inputs using cin
  cout << "Enter no for sum : ";
  cin >> a;
  cout << "Enter no for sum : ";
  cin >> b;
  cout << "Enter no for sum : ";
  cin >> c;

  // 3. Calculate sum
  int sum = a + b + c;
  // 4. Output result using cout
  cout << "the sum is : " << sum;
  return 0;
}