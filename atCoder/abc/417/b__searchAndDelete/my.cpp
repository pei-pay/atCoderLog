#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, m;
  cin >> n >> m;
  vi a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  rep(mi, m) {
    rep(ni, n) {
      if(a[ni] == b[mi]) {
        a[ni] = 0;
        break;
      }
    }
  }

  rep(i, n) {
    if(a[i] != 0) cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}