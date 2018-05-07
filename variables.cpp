#include <iostream>
#include <string>
using namespace std;

int main(){

cout << "Lets learn how to use string variables!"<< std::endl;


string a = "That was actually pretty easy ";

cout << a << std::endl;

string b = " \"Contrary to popular belief!\" A wise man once said ";

cout<< a << " " << b << std::endl;

cout << "Lets Do Some Math!" << std::endl;

int x = 5;
int y = 7;
int z = 15;
int  w = 20;

cout << "5 + 5 = " << x + x << std::endl << "7 - 5 = " << y - x << std::endl;
cout << "15 * 7 = " << z * y << std::endl << "20 / 5 = " << w / x << std::endl;
cout << "Remainder of 20 / 7 = " << w % y << std::endl;

cout << sizeof(x) << std::endl << sizeof(w) << std::endl;

int inp;
cout << "gimme a number: " ;
cin >> inp;
cout << "that number is " << inp;
  return 0;
}
