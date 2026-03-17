#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  bool rice = false;
  for (char c: s) {
    if(c == 'R') rice = true;
    else if(c == 'M') {
      cout << (rice ? "Yes" : "No") << endl;
      break;
    }
  }
  return 0;
}