#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int n, m;
  string s, t;
  cin >> n >> m;
  cin >> s;
  cin >> t;

  bool isPrefix = true;
  rep(i, n) {
    if (t[i] != s[i]) {
      isPrefix = false;
      break;
    }
  }
  bool isSuffix = true;
  rep(i, n) {
    if (t[m - 1 - i] != s[n - 1 - i]) {
      isSuffix = false;
      break;
    }
  }

  if (isPrefix && isSuffix) {
    cout << 0 << endl;
  }
  else if (isPrefix) {
    cout << 1 << endl;
  }
  else if (isSuffix) {
    cout << 2 << endl;
  }
  else {
    cout << 3 << endl;
  }
  return 0;
}