#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> u(m), v(m);
  rep(i, m) cin >> u[i] >> v[i];
  int ans = 0;
  vector<set<int>> s(m);
  rep(i, m) {
    if (u[i] == v[i]) {
      ans++;
      continue;
    }
    if (s[u[i]].count(v[i])) {
      ans++;
      continue;
    }
    s[u[i]].insert(v[i]);
    s[v[i]].insert(u[i]);
  }
  cout << ans << endl;
  return 0;
}