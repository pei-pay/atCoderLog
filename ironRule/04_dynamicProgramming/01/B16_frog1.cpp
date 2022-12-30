#include <iostream>
using namespace std;

int N;
int h[100009], dp[100009];
int main() {
  cin >> N;
  for (int i = 1; i <= N; i++) cin >> h[i];
  dp[1] = 0;
  dp[2] = abs(h[2] - h[1]);
  for (int i = 3; i <= N; i++) {
    int a = dp[i - 1] + abs(h[i] - h[i - 1]);
    int b = dp[i - 2] + abs(h[i] - h[i - 2]);
    dp[i] = min(a, b);
  }

  cout << dp[N] << endl;
  return 0;
}