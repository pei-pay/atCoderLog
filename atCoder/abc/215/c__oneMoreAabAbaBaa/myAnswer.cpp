#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

/**
 * WA
 * 
 * 文字列を並び替えて作ることが可能な文字列を作る方法がわからなかった...
 */
int main() {
  string s;
  int k;
  cin >> s >> k;

  int n = s.size();
  int m = n * (n - 1);
  set<string> a;
  vector<string> b(m, s);
  rep(i, m) {
    rep(j, n) {
      b[i][j] = s[i];
    }
  }
  rep(i, m) {
    a.insert(b[i]);
  }

  return 0;
}