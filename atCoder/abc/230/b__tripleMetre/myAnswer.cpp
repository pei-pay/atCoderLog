#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;

  bool ans = true;

  int n = s.size();
  rep(i, n) {
    if (s[i] == 'o') {
      if (i + 1 < n && s[i + 1] != 'x') {
        ans = false;
      }
      if (i + 2 < n && s[i + 2] != 'x') {
        ans = false;
      }
    }
    else if (s[i] == 'x') {
      if (i + 1 < n) {
        if (s[i + 1] == 'o') {
          if (i + 2 < n) {
            if (s[i + 2] != 'x') {
              ans = false;
            }
          }
          else {
          }
        }
        else if (s[i + 1] == 'x') {
          if (i + 2 < n) {
            if (s[i + 2] != 'o') {
              ans = false;
            }
          }
          else {
          }
        }
        else {
          ans = false;
        }
      }
      else {
      }
    } else {
      ans = false;
    }
  }
  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}