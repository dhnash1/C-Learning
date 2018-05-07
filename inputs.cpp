#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  string color;
  cout << "What is your favorite color?" << std::endl;
  getline(cin,color);
  cout << color << "? Thats pretty Interesting!" << std::endl;
  cout << "Okay, give me a number" << std::endl;
  getline(cin, color);
  int numberized;
  stringstream(color) >> numberized;
  cout<< color << "? Divided by 2, that gets you " << numberized / 2 <<std::endl;
    return 0;
}
