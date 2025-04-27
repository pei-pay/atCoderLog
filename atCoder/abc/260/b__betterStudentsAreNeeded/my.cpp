#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  vector<P> a(n), b(n), c(n);
  rep(i, n) {
    int ai;
    cin >> ai;
    a[i] = { ai, i };
  };
  rep(i, n) {
    int bi;
    cin >> bi;
    b[i] = { bi, i };
  };
  rep(i, n) {
    int ci = a[i].first + b[i].first;
    c[i] = { ci, i };
  }
  sort(a.begin(), a.end(), [](const P& x, const P& y) {
    if (x.first == y.first) {
      return x.second < y.second;
    }
    else {
      return x.first > y.first;
    }
    });
  sort(b.begin(), b.end(), [](const P& x, const P& y) {
    if (x.first == y.first) {
      return x.second < y.second;
    }
    else {
      return x.first > y.first;
    }
    });
  sort(c.begin(), c.end(), [](const P& x, const P& y) {
    if (x.first == y.first) {
      return x.second < y.second;
    }
    else {
      return x.first > y.first;
    }
    });

  set<int> ans;
  rep(i, x) {
    ans.insert(a[i].second);
  }
  rep(i, y) {
    if (ans.count(b[i].second)) {
      y++;
      continue;
    };
    ans.insert(b[i].second);
  }
  rep(i, z) {
    if (ans.count(c[i].second)) {
      z++;
      continue;
    };
    ans.insert(c[i].second);
  }

  rep(i, n) {
    if (ans.count(i)) cout << i + 1 << "\n";
    else continue;
  }
  return 0;
}