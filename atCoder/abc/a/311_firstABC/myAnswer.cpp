#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  bool a = false;
  bool b = false;
  bool c = false;
  rep(i, n) {
    if (s[i] == 'A') a = true;
    if (s[i] == 'B') b = true;
    if (s[i] == 'C') c = true;

    if (a && b && c) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}