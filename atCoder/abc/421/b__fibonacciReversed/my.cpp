#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int x, y;
  cin >> x >> y;

  int n = 10;
  vector<ll> a(n);
  a[0] = x;
  a[1] = y;
  for (int i = 2; i < n; i++) {
    string s = to_string(a[i - 1] + a[i - 2]);
    reverse(s.begin(), s.end());
    a[i] = stoll(s);
  }
  cout << a[n - 1] << endl;
  return 0;
}
