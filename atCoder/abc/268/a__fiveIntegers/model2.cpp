#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  vector<int> a(5);
  rep(i, 5) cin >> a[i];
  sort(a.begin(), a.end());
  int ans = 1;
  for(int i = 1; i < 5; ++i) {
    if (a[i] != a[i - 1]) ans++;
  }
  cout << ans << endl;
  return 0;
}