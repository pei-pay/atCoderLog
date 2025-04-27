#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;

  int ans = 0; // 答え
  string x = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int n = x.size();
  int xIndex = 0; // 今見ている文字の x の index
  while (xIndex < 25) {
    int cnt = 0; // xIndex + 1 を見つけるまでの移動回数
    int sIndex = 0; // x[xIndex] が s のどの index にあるか
    // sIndex を探す
    rep(i, n) {
      if (x[xIndex] == s[i]) sIndex = i;
    }
    bool ok = false;
    // xIndex の次の index を探す
    for (int i = sIndex + 1; i < s.size(); ++i) {
      cnt++;
      if (x[xIndex + 1] == s[i]) {
        ok = true;
        break;
      };
    }
    if (!ok) {
      cnt = 0;
      for (int i = sIndex - 1; i >= 0; --i) {
        cnt++;
        if (x[xIndex + 1] == s[i]) {
          ok = true;
          break;
        }
      }
    }
    xIndex++;
    ans += cnt;
  }
  cout << ans << endl;
  return 0;
}