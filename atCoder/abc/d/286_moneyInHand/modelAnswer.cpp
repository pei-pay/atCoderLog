#include <iostream>
using namespace std;

int main() {
  int n, x;
  int a[50];
  int b[50];
  bool dp[51][10001];

  cin >> n >> x;
  for (int i = 0; i < n; i++) cin >> a[i] >> b[i];

  for (int i = 0; i <= n; i++) for (int j = 1; j <= x; j++) dp[i][j] = false;
  dp[0][0] = true;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= x; j++) {
      for (int k = 0;k <= b[i]; k++) {
        if (j >= a[i] * k) {
          if (dp[i][j - a[i] * k])dp[i + 1][j] = true;
        }
      }
    }
  }

  if (dp[n][x]) cout << "Yes" << endl;
  else cout << "No" << endl;


  return 0;
}