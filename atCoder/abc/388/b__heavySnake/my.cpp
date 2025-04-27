#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, d;
  cin >> n >> d;
  vi t(n), l(n);
  rep(i, n) cin >>  t[i] >> l[i];

  
  rep(i, d) {
    int ans = 0;
    rep(j, n) {
      int x = t[j] * (l[j] + i + 1);
      ans = max(ans, x);
    }
    cout << ans << endl;
  }



  return 0;
}