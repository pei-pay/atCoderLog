#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  rep1(i, a.size() - 1) {
    if (a[i - 1] + 1 < a[i]) a.insert(a.begin() + i, a[i - 1] + 1);
    if (a[i - 1] - 1 > a[i]) a.insert(a.begin() + i, a[i - 1] - 1);
  }

  for (auto x : a) cout << x << ' ';
  return 0;
}