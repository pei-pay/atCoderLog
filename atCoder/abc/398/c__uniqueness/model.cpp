#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  unordered_map<int, int> cnt;
  rep(i, n) cnt[a[i]]++;

  int mx = -1, ans = -1;
  rep(i, n) {
    if (cnt[a[i]] >= 2) continue;
    if (mx < a[i]) {
      mx = a[i];
      ans = i + 1;
    }
  }
  cout << ans << endl;
  return 0;
}