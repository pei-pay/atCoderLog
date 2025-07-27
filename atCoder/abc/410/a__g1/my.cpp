#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, k;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  cin >> k;

  int ans = 0;
  rep(i, n) {
    if (k <= a[i]) ans++;
  }
  cout << ans << endl;
  return 0;
}