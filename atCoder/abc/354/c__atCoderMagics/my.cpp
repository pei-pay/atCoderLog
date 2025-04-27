#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;
using P = pair<int, pair<int, int>>;

int main() {
  int n;
  cin >> n;
  vector<P> p(n); // 強さ、コスト, 番号
  rep(i, n) {
    int a, c;
    cin >> a >> c;
    p[i] = { a, {c, i + 1} };
  }

  sort(p.rbegin(), p.rend());

  int ax = p[0].first;
  int cx = p[0].second.first;
  int numX = p[0].second.second;
  vector<int> ans;
  ans.push_back(numX);
  for (int i = 1; i < n; ++i) {
    int ay = p[i].first;
    int cy = p[i].second.first;
    int num = p[i].second.second;
    if (ax > ay && cx < cy) continue;
    else {
      ax = ay;
      cx = cy;
      ans.push_back(num);
    };
  }

  int m = ans.size();
  cout << m << endl;
  sort(ans.begin(), ans.end());
  rep(i, m) cout << ans[i] << " ";
  cout << endl;

  return 0;
}