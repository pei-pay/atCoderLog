#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, k;
  cin >> n >> k;
  vi a(n), b(k);
  rep(i, n) cin >> a[i];
  rep(i, k) cin >> b[i];

  int mx = 0;
  rep(i, n) {
    mx = max(mx, a[i]);
  }

  rep(i, n) {
    if (mx == a[i]) {
      rep(j, k) {
        if (i + 1 == b[j]) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}