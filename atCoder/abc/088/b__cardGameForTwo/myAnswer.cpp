#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.rbegin(), a.rend());

  int x = 0, y = 0;
  rep(i, n) {
    if (i % 2 == 0) {
      x += a[i];
    } else {
      y += a[i];
    }
  }
  cout << x - y << endl;

  return 0;
}