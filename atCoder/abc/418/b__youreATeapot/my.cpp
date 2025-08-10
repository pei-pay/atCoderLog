#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;

  double ans = 0;
  rep(i, s.size()) {
    if(s[i] != 't') continue;
    rep(j, s.size() - i) {
      string ss = s.substr(i, j + 1);
      if (ss.size() >= 3 && ss[ss.size() - 1] == 't') {
        int x = 0;
        rep(k, ss.size()) {
          if(ss[k] == 't') x++; 
        }
        double y = static_cast<double>(x-2) / static_cast<double>(ss.size() - 2);
        ans = max(ans, y);
      }
    }
  }
  printf("%.10f\n", ans);
  return 0;
}