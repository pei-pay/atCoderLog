#include <iostream>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main() {
  int n, R, C;
  string s;
  cin >> n >> R >> C >> s;
  int r = 0, c = 0;
  set<P> smokes;
  smokes.emplace(0, 0);
  string ans;
  rep(i, n) {
    if (s[i] == 'N') r++;
    if (s[i] == 'S') r--;
    if (s[i] == 'W') c++;
    if (s[i] == 'E') c--;
    smokes.emplace(r, c);
    int tr = r + R, tc = c + C; // 焚き火からの相対位置で人の位置を求める
    if (smokes.count(P(tr, tc))) ans += '1';
    else ans += '0';
  }
  cout << ans << endl;
  return 0;
}