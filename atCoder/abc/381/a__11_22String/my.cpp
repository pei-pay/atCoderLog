#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

void No() {
  cout << "No" << endl;
  exit(0);
}

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  if (n % 2 == 0) No();
  int half = n / 2;
  if (s[half] != '/') No();
  rep(i, half) {
    if (s[i] != '1') No();
  }
  for (int i = half + 1; i < n; ++i) {
    if (s[i] != '2') No();
  }
  cout << "Yes" << endl;
  return 0;
}