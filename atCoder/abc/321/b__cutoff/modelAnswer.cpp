#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);

  rep(i, n - 1) cin >> a[i];

  // 末尾の値を0から100まで全探索
  while (a.back() <= 100) {
    vector<int> b = a;
    sort(b.begin(), b.end());
    int s = 0;
    for (int i = 1; i < n - 1; i++) s += b[i];
    if (s >= x) {
      cout << a.back() << endl;
      return 0;
    }
    a.back()++;
  }

  cout << -1 << endl;

  return 0;
}