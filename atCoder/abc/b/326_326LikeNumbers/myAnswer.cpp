#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;

  for (int i = n; i <= 919; i++) {
    // iの100の位の数
    int a = i / 100;
    // iの10の位の数
    int b = (i - a * 100) / 10;
    // iの1の位の数
    int c = i - a * 100 - b * 10;
    if (a * b == c) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}