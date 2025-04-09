#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vl = vector<long long>;

int main() {
  int n;
  cin >> n;
  vl a(n), s(n - 1), t(n - 1);
  rep(i, n) cin >> a[i];
  rep(i, n - 1) cin >> s[i] >> t[i];

  rep(i, n - 1) {
    if (s[i] <= a[i]) {
      long long x = a[i] / s[i]; // 交換できる単位数
      a[i + 1] += t[i] * x;
    }
  }
  cout << a[n - 1] << endl;
  return 0;
}