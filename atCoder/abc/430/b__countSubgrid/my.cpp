#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  vector<string> x;
  rep(ni, n - m + 1) {
    rep(nj, n - m + 1) {
      string temp = "";
      rep(mi, m) {
        rep(mj, m) {
          temp += s[ni + mi][nj + mj];
        }
      }
      x.push_back(temp);
    }
  }

  set<string> ans;
  rep(i, x.size()) {
    ans.insert(x[i]);
  }
  cout << ans.size() << endl;
  return 0;
}