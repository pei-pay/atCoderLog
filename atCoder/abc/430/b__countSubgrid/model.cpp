#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);

  set<vector<string>> st;
  rep(i, n) cin >> s[i];
  rep(i, n - m + 1) {
    rep(j, n - m + 1) {
      vector<string> grid;
      for(int ii = i; ii < i + m; ++ii) {
        grid.push_back(s[ii].substr(j, m));
      }
      st.insert(grid);
    }
  }
  cout << st.size() << endl;
  return 0;
}