#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  string s, t;
  cin >> n >> m;
  cin >> s >> t;
  int q;
  cin >> q;
  rep(i, q) {
    string w;
    cin >> w;
    bool isS = true;
    rep(wi, w.size()) {
      bool found = false;
      rep(si, n) {
        if (w[wi] == s[si]) found = true;
      }
      if (!found) {
        isS = false;
        break;
      };
    }
    bool isT = true;
    rep(wi, w.size()) {
      bool x = false;
      rep(ti, m) {
        if (w[wi] == t[ti]) x = true;
      }
      if (!x) {
        isT = false;
        break;
      };
    }
    if (isS && !isT) {
      cout << "Takahashi" << "\n";
    }
    else if (!isS && isT) {
      cout << "Aoki" << "\n";
    }
    else {
      cout << "Unknown" << "\n";
    }
  }
  return 0;
}