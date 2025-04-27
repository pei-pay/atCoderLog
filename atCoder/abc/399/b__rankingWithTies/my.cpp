#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<P> p(n);
  rep(i, n) {
    int x;
    cin >> x;
    p[i] = { x, i };
  };
  sort(p.rbegin(), p.rend());
  int r = 1;
  int mx = p[0].first;
  vector<P> ans;
  rep(i, n) {
    if (p[i].first == mx) {
      ans.push_back({ p[i].second, r });
    }
    else {
      mx = p[i].first;
      r = i + 1;
      ans.push_back({ p[i].second, r });
    }
  }

  sort(ans.begin(), ans.end());
  rep(i, n) {
    cout << ans[i].second << endl;
  }
  return 0;
}