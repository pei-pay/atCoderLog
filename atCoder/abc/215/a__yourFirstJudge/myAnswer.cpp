#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  string test = "Hello,World!";
  if (s == test) {
    cout << "AC" << endl;
  }
  else {
    cout << "WA" << endl;
  }
  return 0;
}