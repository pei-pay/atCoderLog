#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  if (n % 2 == 0) {
    cout << "No" << endl;
    return 0;
  }
  int half = n / 2;
  if (s[half] != '/') {
    cout << "No" << endl;
    return 0;
  }
  rep(i, half) {
    if (s[i] != '1') {
      cout << "No" << endl;
      return 0;
    }
  }
  for (int i = half + 1; i < n; ++i) {
    if (s[i] != '2') {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}