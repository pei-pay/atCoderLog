#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;
using ll = long long;

int main() {
  int n, q;
  cin >> n >> q;
  vi a(n);
  rep(i, n) cin >> a[i];
  int maxA = *max_element(a.begin(), a.end());

  const int m = 1e6;
  vector<ll> x(m + 1);
  rep(i, n) x[a[i]]++;

  for (int i = m - 1; i >= 1; i--) x[i] += x[i + 1];
  for (int i = 1; i < m; i++) x[i + 1] += x[i];

  rep(qi, q) {
    int b;
    cin >> b;
    if (maxA < b) {
      cout << -1 << endl;
      continue;
    }
    cout << x[b - 1] + 1 << endl;
  }

  return 0;
}