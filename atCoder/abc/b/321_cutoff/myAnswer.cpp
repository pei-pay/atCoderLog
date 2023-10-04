#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int n, x;
vector<int> a;
int main() {
  cin >> n >> x;
  a.resize(n - 1);
  rep(i, n - 1) cin >> a[i];

  sort(a.begin(), a.end());

  int sum = 0;
  rep(i, n - 1) {
    if (i == 0 || i == n - 2) continue;
    sum += a[i];
  }

  if (sum + a[0] >= x) {
    cout << 0 << endl;
  }
  else if (sum + a[n - 2] < x) {
    cout << -1 << endl;
  }
  else {
    cout << x - sum << endl;
  }

  return 0;
}