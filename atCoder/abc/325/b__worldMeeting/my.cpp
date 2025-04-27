#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> w(n), x(n);
  rep(i, n) {
    cin >> w[i] >> x[i];
  }

  // 24時間のうち、どの時間帯がもっとも多く参加できるか全探索
  long long ans = 0;
  rep(t, 24) {
    long long sum = 0;
    rep(i, n) {
      int currentTime = (x[i] + t) % 24;
      if (currentTime >= 9 && currentTime + 1 <= 18) {
        sum += w[i];
      }
    }
    ans = max(ans, sum);
  }

  cout << ans << endl;
  return 0;
}