#include <iostream>
#include <string>
using namespace std;

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  int sum;

  /* Your code goes here */
	sum = a + b + c;

  cout << "The sum of A, B, and C is " + to_string(sum) << std::endl;
  return 0;
}
