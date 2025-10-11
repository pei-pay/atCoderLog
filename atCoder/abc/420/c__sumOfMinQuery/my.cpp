#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;
using ll = long long;

int main() {
  int n, q;
  cin >> n >> q;
  vi a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];


  long long sum = 0;
  vi m(n);
  rep(i, n) {
    int mi = min(a[i], b[i]);
    m[i] = mi;
    sum += mi;
  }

  rep(i, q) {
    char c;
    cin >> c;
    int x, v;
    cin >> x >> v;
    x--;
    sum -= m[x];
    if (c == 'A') {
      a[x] = v;
      int mi = min(a[x], b[x]);
      m[x] = mi;
      sum += mi;
    }
    else {
      b[x] = v;
      int mi = min(a[x], b[x]);
      m[x] = mi;
      sum += mi;
    }
    cout << sum << "\n";
  }
  return 0;
}