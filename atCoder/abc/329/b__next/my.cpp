#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int max = 0;
  int ans = 0;
  rep(i, n) {
    if (a[i] > max) {
      ans = max;
      max = a[i];
    }
    if (a[i] != max && a[i] > ans) ans = a[i];
  }

  cout << ans << endl;

  return 0;
}