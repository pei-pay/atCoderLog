#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  int a[109], b[109], c[109], d[109];
  cin >> n;
  rep(i, n) cin >> a[i] >> b[i] >> c[i] >> d[i];

  bool graph[1009][1009] = { false };

  rep(i, n) {
    for (int j = c[i]; j < d[i]; j++) {
      for (int k = a[i]; k < b[i]; k++) {
        graph[j][k] = true;
      }
    }
  }

  int ans = 0;
  rep(i, 1009) {
    rep(j, 1009) {
      if (graph[i][j]) ans++;
    }
  }

  cout << ans << endl;

  return 0;
}