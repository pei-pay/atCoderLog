#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s, t;
  cin >> n >> s >> t;
  int cnt = 0;
  rep(i, n) {
    if (s[i] != t[i]) cnt++;
  }
  cout << cnt << endl;
  return 0;
}