#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;

  int x[] = { 0, 0 };
  int tre = 0;
  rep(i, n) {
    if (s[i] == '|') {
      if (x[0] != 0) {
        x[1] = i + 1;
      }
      else {
        x[0] = i + 1;
      }
    }
    if (s[i] == '*') {
      tre = i + 1;
    }
  }

  if (x[0] < tre && x[1] > tre) {
    cout << "in" << endl;
  }
  else {
    cout << "out" << endl;
  }
  return 0;
}