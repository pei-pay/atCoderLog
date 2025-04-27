#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  int a = stoi(s.substr(0, 2));
  int b = stoi(s.substr(3, 1));
  if (38 <= a) {
    cout << 1 << endl;
  }
  else if (a == 37 && 5 <= b) {
    cout << 2 << endl;
  }
  else {
    cout << 3 << endl;
  }
  return 0;
}