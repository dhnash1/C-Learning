#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int random(int y) {
  int x;
  x = rand() % y;
  return x;
}

int main(){
int f;
while(true){
cout << "Ill generate you a random number, give me a max" << std::endl;
cin >> f;
int g = random(f);

cout << g << " Is a random number between 0 and " << f << "." << std::endl;
}
return 0;

}
