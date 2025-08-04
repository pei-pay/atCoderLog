#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  long double ans = 0.0;
  int xi = 0, yi = 0;
  rep(i, n) {
    int dx = x[i] - xi;
    int dy = y[i] - yi;
    ans += sqrt((long double)dx * dx + (long double)dy * dy);
    xi = x[i];
    yi = y[i];
  }
  ans += sqrt((long double)xi * xi + (long double)yi * yi);
  cout << ans << endl;
  return 0;
}