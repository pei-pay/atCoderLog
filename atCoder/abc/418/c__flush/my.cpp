#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, q;
  cin >> n >> q;
  vi a(n), b(q);
  rep(i, n) cin >> a[i];
  rep(i, q) cin >> b[i];

  int maxA = 0;
  rep(i, n) {
    maxA = max(maxA, a[i]);
  }
  int sumA = 0;
  rep(i, n) {
    sumA += a[i];
  }

  sort(a.begin(), a.end());

  cout << maxA << endl;
  vi c(maxA, 0);
  c[0] = 1;
  
  rep(i, q) {
    if (maxA < b[i]) cout << -1 << '\n';
    else cout << c[maxA -1] << '\n';
  }
  return 0;
}