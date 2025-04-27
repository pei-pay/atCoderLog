#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string x;
  cin >> x;
  bool up = false;
  int index;
  rep(i, x.size()) {
    if (x[i] == '.') {
      int a = x[i + 1] - '0';
      if (a >= 5) up = true;
      else up = false;
      index = i - 1;
      break;
    }
  }
  int a = stoi(x.substr(0, index + 1));
  if (up) {
    cout << a + 1 << endl;
  }
  else {
    cout << a << endl;
  }
  return 0;
}