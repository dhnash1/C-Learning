#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

int num;
cout << "Give me a number" << std::endl;
cin >> num;

if (num > 100){
  cout << num << " Is bigger than 100!" << std::endl;
} else if (num == 100){
  cout << num << " Is 100!" << std::endl;
} else {
  cout << num << " Is not bigger than 100!" << std::endl;
}

int count = 5;
  while (count > 0){
    cout << count << ", ";
    --count;
  }
cout<< " Boom!" << std::endl;
int n;
do {
  cout << "Okay, give me 100!" << std::endl;
  cin >> n;
} while(n != 100);

int x;
int y;
string words;
cout << "gimme a word" << std::endl;
cin >> words;
y = words.length();
for (x = 0; x < y; x++) {
  cout << words.at(x) << std::endl;
}

  return 0;
}
