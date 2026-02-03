#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> x(m, { 0, 0 });
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    x[a - 1].first += b;
    x[a - 1].second += 1;
  }
  rep(i, m) {
    double ans = x[i].first / x[i].second;
    printf("%.10f\n", ans);
  }
  return 0;
}