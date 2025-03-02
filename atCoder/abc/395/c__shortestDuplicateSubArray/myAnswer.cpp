#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <climits>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  set<int> s;
  // 数字と index を管理
  map<int, stack<int>> m;
  int ans = INT_MAX;
  bool ok = false;
  rep(i, n) {
    if (s.count(a[i])) {
      ok = true;
      int x = i - m[a[i]].top() + 1;
      ans = min(ans, x);
      m[a[i]].push(i);
    }
    else {
      s.insert(a[i]);
      m[a[i]].push(i);
    }
  }
  if (ok) cout << ans << endl;
  else cout << -1 << endl;
  return 0;
}