#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int main() {
  // 入力
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  sort(a.begin(), a.end());

  int ans = 0;
  while (a[n - 1] - a[0] > 1) {
    a[n - 1] -= 1;
    a[0] += 1;
    sort(a.begin(), a.end());
    ans++;
  }


  // 出力 
  cout << ans << endl;
  return 0;
}