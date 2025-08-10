#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int n = s.size();

  double ans = 0;
  rep(r, n) rep(l, r-1) {
    if(s[l] != 't') continue;
    if(s[r] != 't') continue;
    int cnt = 0, len = r - l - 1;
    for(int i = l + 1; i < r; ++i) {
      if(s[i] == 't') cnt++;
    }
    double now = (double) cnt/len;
    ans = max(ans, now);
  }
  printf("%.10f\n", ans);
  return 0;
}