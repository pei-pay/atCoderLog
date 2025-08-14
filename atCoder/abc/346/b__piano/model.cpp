#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int w, b;
  cin >> w >> b;
  int n = w+b;
  string s = "wbwbwwbwbwbw";
  int m = s.size();
  string t;
  rep(i, 100) t += s;
  rep(si, m) {
    int cnt = 0;
    rep(i, n) {
      if (t[si + i] == 'w') cnt++;
    }
    if(cnt == w) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}